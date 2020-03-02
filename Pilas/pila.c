#include "pila.h"

void insertar (int *pila,int dato,int *tope){
	pila[++(* tope)]=dato;
}
void mostrar_eliminar (int *pila, int *tope){
	if((* tope)==-1) printf("Ya es toda la pila");
	else{	
		int x =pila[(* tope)--];
		printf ("%d\n", x);
	}
}
