#ifndef __COLA_H__
#define __COLA_H__

#include<stdio.h>
#include <stdlib.h>
#include "Lista.h"


struct Cola
{
  struct Lista *lista;
};
struct Cola *crear_cola (int);
struct Cola *push (struct Cola *, int);
int estaVacia (struct Cola *);
int top (struct Cola *);
void mostrar_cola (struct Cola *);
// pop = eliminar
struct Cola *pop (struct Cola *);

#endif
