#ifndef __COLAC_H__
#define __COLAC_H__
#include <stdio.h>
#include <stdlib.h>
struct ColaCircular
{
  int *dato;
  int frente;
  int cantidadElementos;
  int maxi;
};

typedef struct ColaCircular cola;


void crearCola (cola *);
int colaVacia (cola *);
int colaLlena (cola *);
int calcularUbicacion (cola *);
int calcularFrente (cola *);
void push (cola *, int);
int pop (cola *);
void mostrarCola (cola *);


#endif
