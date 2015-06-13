#include "BSN.h"

configuration BSNNodeAppC {}
implementation {

	components MainC, BSNNodeC as Node;
	components new AMSenderC(AM_RADIO_BSN_MSG);
	components new AMReceiverC(AM_RADIO_BSN_MSG);
	components new TimerMilliC() as Timer;
	components ActiveMessageC;
	components new ACCSensorC() as ACC;
	components new ECGSensorC() as ECG;

	Node.Boot -> MainC.Boot;

	Node.ACCRead -> ACC;
	Node.ACCSplitControl -> ACC;
	Node.ECGRead -> ECG;
	Node.ECGSplitControl -> ECG;
	Node.PacketAcknowledgements -> ActiveMessageC;
 	Node.Receive -> AMReceiverC;
 	Node.AMSend -> AMSenderC;
	Node.AMControl -> ActiveMessageC;
	Node.Timer -> Timer;
	Node.Packet -> AMSenderC;

}

