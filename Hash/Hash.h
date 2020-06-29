#ifndef __TABLA_H__
#define __TABLA_H__
//Hashing abierto con listas
#include<stdio.h>
#include<stdlib.h>
#include "Lista.h"
struct Tabla
{
  int numero_de_elmentos;
  int numero_de_colisiones;
  struct Lista *listas[1000];
};

struct Tabla *crear_tabla (int);
int hasheo (int);
void mostrar_tabla (struct Tabla *);
struct Tabla *insertar_tabla (struct Tabla *, int);
struct Tabla *eliminacion_tabla (struct Tabla *, int);
int buscar_tabla (struct Tabla *, int);

#endif
