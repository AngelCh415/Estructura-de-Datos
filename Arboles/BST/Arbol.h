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
void mostrar_1 (struct Arbol *);
void mostrar_2 (struct Arbol *);
void mostrar_3 (struct Arbol *);

#endif
