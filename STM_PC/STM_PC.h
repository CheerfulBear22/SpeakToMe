#ifndef STH_PC_H
#define STM_PC_H

#include <stdint.h>

typedef struct {
	uint8_t start_byte;
	uint8_t message_type;
	uint16_t payload_len;
	uint16_t* payload;
	uint16_t check;
} STM_Packet;
#endif
