#ifndef BSN_H
#define BSN_H

typedef nx_struct my_msg {
	nx_uint16_t type;
}my_msg_t;

typedef nx_struct bsn_msg {
  nx_uint16_t message;
}bsn_msg_t;



#define START 0
#define NO_MOVEMENT 1 
#define MOVEMENT 2
#define CRISIS 3
#define RESIZE 10.0/(200*65535)
#define MTHR 0.5
#define CTHR 2 
#define DELAY 10

enum {
  AM_BSN_MSG = 0x89,
};

enum{
  AM_RADIO_BSN_MSG = 6,
};

#endif
