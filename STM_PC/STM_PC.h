#ifndef STM_PC_H
#define STM_PC_H

#include <stdint.h>

typedef struct {
	uint8_t message_type;
	uint8_t payload_len;
	uint8_t[256] payload;
} STM_Packet;
#endif
