#include "Hash.h"

int main(){
	int dato = 0; 
	int indice = 0;
	int n = 0;
	int i;
//	struct Lista *lista; 
	struct Tabla *tabla;
	tabla = crear();
	printf("Ingrese cuantos valores se leeran ");
	scanf("%d", &n);
	for ( i=0; i<n; i++){
		scanf ("%d", &dato); 
		indice = hasheo(dato); 
		tabla = insertar (tabla, indice, dato);
	}
	printf ("Ingrese el elemento a buscar: ");
	scanf("%d", &dato);
	indice = hasheo(dato); 
	buscar(tabla,indice);
	return 0;
}
