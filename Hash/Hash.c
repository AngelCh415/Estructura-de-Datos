#include "Hash.h"

struct Tabla * crear(void){
	int i;
        struct Tabla *Hash = NULL;
        Hash = (struct Tabla *) malloc(sizeof(struct Tabla));
        if(Hash == NULL) {
	   return NULL;
  	}
	for(i=0; i<1000;i++) Hash->listas[i] = NULL; 
	Hash-> numero_de_elementos= 0; 
	Hash-> listas -> siguiente = NULL; 
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
	aux->listas[indice] = dato; 
	aux->listas[indice]->siguiente = tabla;
        return aux;	

}
void buscar (struct Tabla *tabla, int indice){
	if(tabla->listas[indice] == -1) printf ("No se encontro");
	else{
		printf ("El elemento se guardo en la posicion %d y es %d", indice, tabla->listas[indice]);
	}
}
