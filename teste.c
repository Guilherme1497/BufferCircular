#include <stdlib.h>
#include <stdio.h>

#include "circularBuffer.h"

int main () {

	char dados[7] = {'1', '2', '3', '4' , '5', '6', '7'};
	char lidos[3];

	circular_buffer cb;

	cb.start = 0;
	cb.end = 0;


	printf("Posicao de inicio: %d\n", cb.start);
	printf("Posicao de fim: %d\n", cb.end);

	circularBufferInsert(&cb, &dados, 7);
	
		int i = 0;
	
		for(i=0;i<5;i++) {
		
			printf("Dado no buffer:%c\n", (char)cb.data[i]);
		}
	
		printf("Posicao a ser add novo dado: %d\n", cb.end);

	circularBufferRemove(&cb, &lidos, 3);
	
		int j = 0;

		for (j = 0; j < 3; ++j)
			{
				printf("Dados que já foram lidos do buffer:%c\n", (char)lidos[j]);
			}

		printf("Nova posição do buffer a ser lida:  %d\n", cb.start);	

	
	printf("-------------- dados remanescente no buffer ----------\n");

	int k = cb.start;
	
	for(k;k<5;k++) {
		
		printf("Dado:%c\n", (char)cb.data[k]);
	}
	
	

	return 0;
}
