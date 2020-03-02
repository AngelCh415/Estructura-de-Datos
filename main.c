#include "pila.h"

int main (void){
	
	int tope=-1;
	insertar (&pila, 5,&tope);
	insertar (&pila, 15, &tope);
	insertar (&pila, 20, &tope);
	mostrar_eliminar(&pila, &tope);
	mostrar_eliminar(&pila, &tope);
	mostrar_eliminar(&pila, &tope);
	mostrar_eliminar(&pila, &tope);
	return 0;
}
