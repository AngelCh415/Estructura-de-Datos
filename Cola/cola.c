#include "Cola.h"

void push( int *cola, int dato, int *tope){
	cola[++(* tope)] = dato;
}
void pop (int *cola, int *ini, int tope){
	if((* ini)==tope+1){
		printf("Ya es toda la cola");
	}
	else{
		int x = cola[(*ini)++];
		printf("%d\n", x);
	}
}
