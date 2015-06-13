#include "Timer.h"
#include "BSN.h"
 

module BSNNodeC  {

  uses {
    interface Boot;
    interface Receive;
    interface AMSend;
    interface AMPacket;
    interface PacketAcknowledgements;
    interface Timer<TMilli> as Timer;
    interface SplitControl as AMControl;
    interface Packet;
    interface Read<uint16_t> as ACCRead;
    interface SplitControl as ACCSplitControl;
    interface Read<uint16_t> as ECGRead;
    interface SplitControl as ECGSplitControl;

  }

}
implementation {

  message_t packet;
  uint16_t crisis;
  uint16_t movements;
  uint16_t responseCounter;
  uint16_t sampleCounter;
  uint16_t response;
  uint32_t accumulator;

  task void startSession();
  task void sendResponse();
  task void storeResponse();
  task void startMonitoring();
  task void updateResponses(uint16_t);
  task void evaluateSituation();
  task void registerValue(uint16_t);
  
  
  
  event void Boot.booted() {

    call AMControl.start();

    if (TOS_NODE_ID == 0) {
      crisis = 0;
      movements = 0;
      responseCounter = 0;
      call ECGSplitControl.start();

    } else {
      response = 0
      sampleCounter = 0;
      accumulator = 0;
      call ACCSplitControl.start();
      
    }
  }

  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
      if(TOS_NODE_ID != 0 && response != 0) {
        dbg("main", "%s - Trasmettitore nodo %hhu acceso. \n", sim_time_string(), TOS_NODE_ID);
        post sendResponse();
      } else {
        dbg("main", "%s - Trasmettitore nodo %hhu accensione fallita, inizio nuovo tentativo. \n", sim_time_string(), TOS_NODE_ID);
        call AMControl.start();
      }
    }
  }

  event void ECGSplitControl.startDone(error_t err) {
    if (err == SUCCESS) {
      if (TOS_NODE_ID == 0) {
        post startSession();
      }
    } else {
      call ECGSplitControl.start();
    }
  }

  event void ACCSplitControl.startDone(error_t err) {
    if (err != SUCCESS) {
      if (TOS_NODE_ID != 0) {
        call ACCSplitControl.start();
      }
    }
  }

  

  event void AMControl.stopDone(error_t err) {
    dbg("main", "%s - Trasmettitore nodo %hhu spento. \n", sim_time_string(), TOS_NODE_ID);
  }

  event void ACCSplitControl.stopDone(error_t err) {
    //do nothing
  }

  event void ECGSplitControl.stopDone(error_t err) {
    //do nothing
  }

  event message_t* Receive.receive(message_t* buf,void* payload, uint8_t len) {
    
    my_msg_t* msg=(my_msg_t*)payload;
    uint16_t type = mess->type;
    
    if(type == START && TOS_NODE_ID != 0) {
      post startMonitoring();
      dbg("main", "%s - Nodo %hhu ricevuto messaggio START. \n", sim_time_string(), TOS_NODE_ID);
    } else if (type != START && TOS_NODE_ID == 0) {
      post updateResponses(type);
      responseCounter++;
      dbg("main", "%s - Nodo %hhu ricevuto %hhu responsi. \n", sim_time_string(), TOS_NODE_ID,responseCounter);
      if(responseCounter == 4) {
        post evaluateSituation();  
      } 
    }
    return buf;
  }

  event void Timer.fired() {
    sampleCounter++;
    call ACCRead.read();
    if(sampleCounter < 200) {
       call Timer.startOneShot( 50 );
    }   
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    if(&packet == buf && err == SUCCESS ) {
      if ( call PacketAcknowledgements.wasAcked( buf ) ) {
        if(TOS_NODE_ID == 0) {
          dbg("main", "%s - Sessione di monitoraggio iniziata\n", sim_time_string(), TOS_NODE_ID);
        } else {
          switch(response) {
            case(NO_MOVEMENT):
              dbg("main", "%s - Nodo %hhu NO_MOVEMENT inviato\n", sim_time_string(), TOS_NODE_ID);
              break;
            case(MOVEMENT):
              dbg("main", "%s - Nodo %hhu MOVEMENT inviato\n", sim_time_string(), TOS_NODE_ID);
              break;
            case(CRISIS):
              dbg("main", "%s - Nodo %hhu CRISIS inviato\n", sim_time_string(), TOS_NODE_ID);
              break;
          }
        }
      } else {
        if(TOS_NODE_ID == 0) {
          post startSession();
        } else {
          post sendResponse();
        }
        dbg("main", "%s - Nodo %hhu invio fallito, inizio nuovo tentativo.\n", sim_time_string(), TOS_NODE_ID);
      }
    }
  }

  event void ACCRead.readDone(error_t result, uint16_t data) {
    post registerValue((uint32_t)data);
  }

  event void ECGRead.readDone(error_t result, uint16_t data) {
    if(data == 0) {
      dbg("main", "%s OUTPUT = NO_MOVEMENT\n", sim_time_string());
    } else {
      if(crisis > 1) {
        dbg("main", "%s OUTPUT = CRISIS !!!!!!!!!!!!!!!!!!\n", sim_time_string());
      } else {
        dbg("main", "%s OUTPUT = MOVEMENT\n", sim_time_string());
      }
    }
    post startSession();
    
  }

  

  /****************** TASKS ******************/

  task void startSession() {
    responseCounter = 0;
    crisis = 0;
    movements = 0;
    my_msg_t* msg = (my_msg_t*)(call Packet.getPayload(&packet,sizeof(my_msg_t)));
    msg->type = START;
    dbg("main", "%s - Tentativo inizio sessione di monitoraggio,\n", sim_time_string());
    call PacketAcknowledgements.requestAck( &packet );
    call AMSend.send(AM_BROADCAST_ADDR,&packet,sizeof(my_msg_t))
  }

  task void updateResponses(uint16_t resp) {
    if(resp == CRISIS) {
      crisis++;
    } else if(resp == MOVEMENT) {
      movements++;
    }
  }

  task void evaluateSituation() {
    if((crisis+movements) > 2) {
      call ECGRead.read();
    } else {
      post startSession();
      dbg("main", "%s OUTPUT = NO_MOVEMENT\n", sim_time_string());
    }


  }

  task void sendResponse() {
    my_msg_t* msg = (my_msg_t*)(call Packet.getPayload(&packet,sizeof(my_msg_t)));
    msg->type = response;
    call PacketAcknowledgements.requestAck( &packet );
    call AMSend.send(AM_BROADCAST_ADDR,&packet,sizeof(my_msg_t));
  }

  task void storeResponse() {
    float result = AVG_FACTOR*accumulator;
    if(accumulator <= MTHR) {
      response = NO_MOVEMENT;
    } else if (accumulator >= CTHR) {
      response = CRISIS;
    } else {
      response = MOVEMENT;
    }
    call AMControl.start();
  }

  task void registerValue(uint32_t value) {
      accumulator+= value;
      if(sampleCounter == 200) {
        post storeResponse();
      }
  }

  task void startMonitoring() {
    response = 0;
    sampleCounter = 0;
    accumulator = 0;
    call AMControl.stop();
    call ACCRead.read();
    sampleCounter++;
    call Timer.startOneShot( 50 );
  }

}