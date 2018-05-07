#include <stdlib.h>
#include <stdio.h>

#include "circularBuffer.h"



int main (){

	char c[6] = {'a', 'b', 'c', 'd', 'e', '7'};
	char d[2];


	circular_buffer cb;

	cb.nItems = 0;
	cb.start = 0;
	cb.end = 0;

	printf("%d\n", cb.nItems);
	printf("%d\n", cb.start);
	printf("%d\n", cb.end);

	circularBufferInsert(&cb, &c, 6);
	printf("%c\n", (char)cb.data[0]);
	printf("END: %d\n", cb.end);

	circularBufferRemove(&cb, &d, 2);
	printf("%c\n", (char)d[0]);
	printf("START: %d\n", cb.start);

	return 0;
}