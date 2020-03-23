#ifndef __TABLA_H__
#define __TABLA_H__

#include<stdio.h>
#include<stdlib.h>
struct Lista {
	int dato[1000]; 
	struct Lista *sig;
};
struct Tabla {
	int elem;
	struct Lista *arre;
}; 

struct Tabla * crear(void); 
int hasheo (int);
struct Tabla * insertar (struct Tabla *, int ,int); 
void buscar ( struct Tabla *, int);

#endif


