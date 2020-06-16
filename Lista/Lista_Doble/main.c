#include "ListaD.h"

int main(void){
	struct ListaD * lista= NULL;
	lista = crear_lista_doble(13);
	lista = insertar_en_doble (lista, 12);
	lista = insertar_en_doble (lista, 9);
	lista = insertar_en_doble (lista, 2);
	lista = insertar_en_doble (lista, 5);
	mostrar(lista);
	printf("\n");
	mostrar_re(lista);
	lista = eliminar_en_doble (lista);
	printf("\n");
	mostrar(lista);
	printf("\n");
	mostrar_re(lista);
	return 0;
}