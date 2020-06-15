#ifndef __ARBOL_H__
#define __ARBOL_H__

#include<stdlib.h>
#include<stdio.h>

struct Arbol
{
  int dato;
  struct Arbol *izquierda;
  struct Arbol *derecha;

};
struct Arbol *crear_Arbol (int);
struct Arbol *insertar_Arbol (struct Arbol *, int);

#endif
