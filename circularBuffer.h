#include <stdio.h>
#include <stdint.h>

#ifndef __CIRCULARBUFFER_H
#define __CIRCULARBUFFER_H

#define BUFFER_SIZE 5

typedef struct{
	uint8_t data[BUFFER_SIZE];
	uint8_t nItems;
	uint8_t start;
	uint8_t end;
} circular_buffer;


uint8_t circularBufferInsert(circular_buffer *b, void * data, uint8_t size);

uint8_t circularBufferRemove(circular_buffer *b, void * data, uint8_t size);

uint8_t circularBufferFull(circular_buffer *b);

uint8_t circularBufferEmpty(circular_buffer *b);

#endif

