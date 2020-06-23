#ifndef __VECTOR_H__
#define __VECTOR_H__

#include<stdio.h>
#include<stdlib.h>

struct Vector
{
  int *arre;
  int elementos;
  int capacidad;
};

struct Vector *crear_vector (int);
struct Vector *insertar_vector (struct Vector *, int);
int buscar (struct Vector *, int);
struct Vector *eliminar (struct Vector *, int);
void mostrar (struct Vector *);


#endif
