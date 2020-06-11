#ifndef __PILA_H__
#define __PILA_H__

#include<stdio.h>
#include<stdlib.h>
#include "Lista.h"
struct Pila
{
  struct Lista *lista;
};

struct Pila *crear_pila (int);
struct Pila *insertar (struct Pila *, int);
struct Pila *eliminar (struct Pila *);
void mostrar_pila (struct Pila *);

#endif
