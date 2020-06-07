#ifndef __PILA_H__
#define __PILA_H__

#include<stdio.h>
#include<stdlib.h>

struct Pila
{
  int dato;
  struct Pila *siguiente;
};

struct Pila *crear (int);
struct Pila *insertar (struct Pila *, int);
struct Pila *eliminar (struct Pila *);
void mostrar (struct Pila *);

#endif
