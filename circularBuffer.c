#include "circularBuffer.h"


uint8_t circularBufferInsert(circular_buffer *b, void * data, uint8_t size){
	uint8_t i;
	int8_t ret = 0;
	uint8_t *ptr = (uint8_t *)data;

	if(b == NULL){
		ret = -1;
		return ret;
	}

	for(i=0;i<size;i++){
		b->data[b->end] = *ptr++;
		b->end++;
		ret++;
		if(b->end == BUFFER_SIZE){
			b->end = 0;
		}
	}

	return ret;
}

uint8_t circularBufferRemove(circular_buffer *b, void * data, uint8_t size){
	uint8_t i;
	int8_t ret =0;
	uint8_t *ptr = (uint8_t *)data;

	if(b == NULL){
		ret = -1;
		return ret;
	}

	if(b->start == b->end){
		ret = -2;
		return ret;
	}
	//@TODO:Fazer exceção para quando 'size' é maior que a quantidade de elementos contido no buffer.
	

	for(i=0;i<size;i++){
		*ptr++ = b->data[b->start];
		b->start++;
		ret++;
		if(b->start == BUFFER_SIZE){
			b->start = 0;
		}
	}
	return ret;

}