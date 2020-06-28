#ifndef __HashC_H__
#define __HashC_H__

#include<stdio.h>
#include<stdlib.h>

struct Hash
{
  int datos_totales;
  int colisiones;
  int pos[1000];
};
struct Hash *crear_tabla (int);
int hasheo (int);
struct Hash *insertar (struct Hash *, int);
void mostrar (struct Hash *);
struct Hash *eliminar (struct Hash *, int);
int buscar (struct Hash *, int);

#endif
