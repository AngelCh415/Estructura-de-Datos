#include "Hash.h"

struct Tabla * crear(void){
	int i;
        struct Tabla *Hash = NULL;
        Hash = (struct Tabla *) malloc(sizeof(struct Tabla));
        if(Hash == NULL) {
	   return NULL;
  	}
	for(i=0; i<1000;i++) {
              Hash->listas[i] = NULL; 
	      Hash->listas[i] = (struct Lista *) malloc(sizeof(struct Lista)); 
        }
	Hash-> numero_de_elementos= 0;
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

	struct Tabla *aux= crear ();
        if(aux==NULL){
		return NULL;
	}	
	aux->listas[indice] = dato; 
	printf("%d", aux->listas[indice]);
        return tabla;	

}
void buscar (struct Tabla *tabla, int dato){
        int indice = hasheo(dato);
	if(tabla->listas[indice] == NULL) printf ("No se encontro");
	else{
		printf("Dato encontrado");
	}
}
