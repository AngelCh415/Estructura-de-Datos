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
struct Lista *insertar (struct Lista *, int);
void mostrar (struct Lista *);

#endif
