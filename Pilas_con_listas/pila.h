#ifndef __PILA_H__
#define __PILA_H__

#include<stdio.h>
#include<stdlib.h>
#include "Lista.h"
struct Pila
{
  int dato;
  struct Lista *siguiente;
};

struct Pila *crear (int);
struct Pila *insertar (struct Pila *, int);
struct Pila *eliminar (struct Pila *);
void mostrar (struct Pila *);

#endif
