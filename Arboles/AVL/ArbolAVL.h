#ifndef __ARBOLAVL_H__
#define __ARBOLAVL_H__
#include<stdio.h>
#include<stdlib.h>
struct AVL
{
  int dato;
  int balance;
  struct AVL *derecha;
  struct AVL *izquierda;
};
struct AVL *crear_AVL (int);
struct AVL *insertar_AVL (struct AVL *, int);
struct AVL *rotacion_izq (struct AVL *);
struct AVL *rotacion_der (struct AVL *);
struct AVL *rotacion_doble_der (struct AVL *);
struct AVL *rotacion_doble_izq (struct AVL *);
void mostrar_1 (struct AVL *);
void mostrar_2 (struct AVL *);
void mostrar_3 (struct AVL *);
int altura (struct AVL *);
#endif
