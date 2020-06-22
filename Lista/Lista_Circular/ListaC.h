#ifndef __LISTAC_H__
#define __LISTAC_H__

#include<stdio.h>
#include<stdlib.h>

struct ListaC
{
  int dato;
  struct ListaC *siguiente;
};
struct ListaC *crear_circular (int);
struct ListaC *insertar_circular (struct ListaC *, int);
void mostrar (struct ListaC *);
struct ListaC *eliminar_dato (struct ListaC *, int);
struct ListaC *eliminar_final (struct ListaC *);
struct ListaC *eliminar_inicio (struct ListaC *);
int buscar (struct ListaC *, int);
struct ListaC *buscar_fin (struct ListaC *);
#endif
