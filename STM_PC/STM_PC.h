#ifndef STM_PC_H
#define STM_PC_H

#include <stdint.h>

typedef struct {
	uint8_t message_type;
	uint8_t payload_len;
	uint8_t payload[256];
} STM_Packet;

STM_Packet* deserialiseSTM_Packet(uint8_t* buff);
uint8_t* serialiseSTM_Packet(STM_Packet* packet);

int sendSTMMessage(int fd, uint8_t* buff);
#endif
