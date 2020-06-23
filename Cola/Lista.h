#ifndef __LISTA_H__
#define __LISTA_H__

#include<stdio.h>
#include<stdlib.h>

struct Lista
{
  int dato;
  struct Lista *siguiente;
};

struct Lista *crear (int);
struct Lista *insertar_lista (struct Lista *, int);
struct Lista *eliminar_lista_inicio (struct Lista *);
struct Lista *eliminar_lista_dato (struct Lista *, int);
struct Lista *eliminar_lista_final (struct Lista *);
void mostrar_lista (struct Lista *);
int buscar_lista (struct Lista *, int);

#endif
