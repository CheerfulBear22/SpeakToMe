#include "STM_PC.h"
#include <sys/socket.h>
#include <unistd.h>
#include <stdint.h>

STM_Packet deserialiseSTMPacket(uint8_t[] buff) {
	STM_Packet packet = {0};

	packet.message_type = buff[0];
	packet.payload_len = buff[1];
	memcpy(packet.payload, &buff[3], pkt.payload_len);
	
	return packet;
}

uint8_t[] serialiseSTM_Packet(STM_Packet* packet) {
	uint8_t[sizeof(STM_Packet)] buff;

	buff[0] = packet.message_type;
	buff[1] = packet.payload_len;
	memcpy(&buff[3], packet.payload, pkt.payload_len);

	return buff;
}

int sendSTMMessage(int fd, uint8_t[] buff) {
	if (write(fd, buff, sizeof(buff)) == -1)
		return -1;
}
