#include "Hash.h"

struct Tabla * crear(){
	struct Tabla *tabla =NULL;
	int i;
	tabla = (struct Tabla *) malloc (sizeof(struct Tabla));
	for(i=0; i<1000; i++){
		tabla->arre[i] = -1;
	}
	tabla -> elem =0;
	tabla ->sig = NULL;
	return tabla;
}

int hasheo (int dato){
	int indice = 0; 
	indice = dato %1000; 
	return indice;
}

struct Tabla *  insertar (struct Tabla *tabla, int indice, int dato){
	struct Tabla *aux= crear ();	
	aux->arre[indice] = dato;
	aux->sig = tabla;	
        return aux;	

}
void buscar (struct Tabla *tabla, int indice){
	if(tabla->arre[indice] == -1) printf ("No se encontro");
	else{
		printf ("El elemento se guardo en la posicion %d y es %d", indice, tabla->arre[indice]);
	}
}
