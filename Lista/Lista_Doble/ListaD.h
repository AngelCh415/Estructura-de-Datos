#ifndef __LISTAD_H__
#define __LISTAD_H__

#include<stdio.h>
#include<stdlib.h>

struct ListaD {
	int dato;
	struct ListaD * siguiente;
	struct ListaD * anterior;
};
struct ListaD * crear_lista_doble (int);
struct ListaD * insertar_en_doble (struct ListaD * , int);
void mostrar (struct ListaD *);
void mostrar_re (struct ListaD *);
struct ListaD * eliminar_en_doble (struct ListaD *);

#endif