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
struct Pila *insertar_pila (struct Pila *, int);
struct Pila *eliminar (struct Pila *);
struct Pila *mostrar_pila (struct Pila *);

#endif
