#ifndef __TABLA_H__
#define __TABLA_H__

#include<stdio.h>
#include<stdlib.h>
struct Lista {
	int dato; 
	struct Lista *siguiente;
};
struct Tabla {
	int numero_de_elmentos;
	struct Lista *listas[1000];
}; 

struct Tabla * crear(void); 
int hasheo (int);
struct Tabla * insertar (struct Tabla *, int ,int); 
void buscar ( struct Tabla *, int);

#endif


