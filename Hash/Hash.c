#include "Hash.h"

struct Tabla * crear(struct Tabla *Hash){
	int i; 
	for(i=0; i<1000;i++) Hash->arre[i] = NULL; 
	Hash-> elem = 0; 
	Hash-> arre -> sig = NULL; 
	return Hash; 
}

int hasheo (int dato){
	int indice = 0; 
	indice = dato %1000; 
	return indice;
}
/*struct Tabla * Insercion (int pos, int dato){
	struct Lista *lista[1000]; 
	struct Tabla *nueva = crear(); 
	nueva->[lista[pos]] = dato;
}*/
struct Tabla *  insertar (struct Tabla *tabla,  int dato){
	int indice = hasheo(dato);
	struct Tabla *aux= crear (aux); 
	aux->arre[indice] = dato; 
	aux->arre->sig = tabla;
        return aux;	

}
void buscar (struct Tabla *tabla, int indice){
	if(tabla->arre[indice] == -1) printf ("No se encontro");
	else{
		printf ("El elemento se guardo en la posicion %d y es %d", indice, tabla->arre[indice]);
	}
}
