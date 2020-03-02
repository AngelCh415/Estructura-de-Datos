#include "Hanoi.h"

int main(void){
	printf("Ingrese su número de discos: ");
	scanf("%d",&n);
	printf("Los movimientos son:\n ");
	Hanoi(n,'A','B', 'C');
}

