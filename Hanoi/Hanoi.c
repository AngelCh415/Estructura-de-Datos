#include "Hanoi.h"

void Hanoi (int n, char origen, char destino, char auxiliar){
	if(n>=3){
		Hanoi( n-1, origen, auxiliar,destino);
		printf("%c -> %c \n", origen, destino);
		Hanoi(n-1 ,auxiliar, destino, origen);
	}
	if(n==2){
		printf("%c -> %c\n", origen, destino);
		printf("%c -> %c\n", origen, auxiliar);
		printf("%c -> %c\n", destino, auxiliar);
	}
	else{
		printf("%c -> %c\n", origen, auxiliar);
		return;
	}
}
