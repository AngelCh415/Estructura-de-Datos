#include "Hash.h"

int main(){
	int dato = 0; 
	int n = 0;
	int i;
	struct Tabla *tabla;
	
	tabla = crear(tabla);
	printf("Ingrese cuantos valores se leeran ");
	scanf("%d", &n);
	for ( i=0; i<n; i++){
		scanf ("%d", &dato); 
		tabla = insertar (tabla, dato);
	}
	printf ("Ingrese el elemento a buscar: ");
	scanf("%d", &dato);
	buscar(tabla,dato);
	return 0;
}
