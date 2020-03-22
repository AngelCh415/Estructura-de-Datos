#ifndef __TABLA_H__
#define __TABLA_H__

#include<stdio.h>
#include<stdlib.h>


struct Tabla {
	int elem;
	int arre[1000];
	struct Tabla * sig;
}; 
struct Tabla * crear(void); 
int hasheo (int);
struct Tabla * insertar (struct Tabla *, int ,int); 
void buscar ( struct Tabla *, int);

#endif


