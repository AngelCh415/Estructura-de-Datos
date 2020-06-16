#include "ListaD.h"

struct ListaD * crear_lista_doble (int dato){
	struct ListaD *nueva = NULL;
	nueva = (struct ListaD * )malloc ( sizeof(struct ListaD));
	if(nueva==NULL){
		return NULL;
	}
	nueva->dato = dato; 
	nueva->siguiente = NULL;
	nueva->anterior = NULL;
	return nueva;
}
struct ListaD * insertar_en_doble (struct ListaD * lista, int dato){
	struct ListaD * nueva_lista = crear_lista_doble(dato); 	
	struct ListaD * ultimo = lista;
	nueva_lista->siguiente= lista; 
	nueva_lista->anterior= ultimo;
	lista = nueva_lista;
	return lista;
}
void mostrar (struct ListaD * lista){
	while(lista!=NULL){
		printf("%d ",(*lista).dato);
		lista = lista->siguiente;
	}
}
void mostrar_re (struct ListaD * lista){
	while(lista->siguiente!=NULL) {
		lista = lista->siguiente;
	}
     while(lista!=NULL){
		printf("%d ", lista->dato);
		lista = lista->anterior;
	}	
}
struct ListaD * eliminar_en_doble (struct ListaD * lista){
	if(lista == NULL){
		return NULL;
	}
	struct ListaD * aux = lista->siguiente;
	free(lista);
	lista = aux;
	return lista;
}
