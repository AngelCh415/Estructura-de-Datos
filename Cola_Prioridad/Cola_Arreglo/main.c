#include "ColaPA.h"

int
main ()
{
  printf ("Agregando elementos a la cola 5 con prioridad 10\n");
  llenar (cola);
  insertar (cola, 5, 10);
  printf ("Agregando elementos a la cola 15 con prioridad 1\n");
  insertar (cola, 15, 1);
  printf ("Agregando elementos a la cola 5 con prioridad 8\n");
  insertar (cola, 5, 8);
  printf ("Agregando elementos a la cola 4 con prioridad 15\n");
  insertar (cola, 4, 15);
  printf ("Agregando elementos a la cola 14 con prioridad 20\n");
  insertar (cola, 14, 20);
  printf ("Agregando elementos a la cola 2 con prioridad 4\n");
  insertar (cola, 2, 4);
  mostrar (cola);
  printf ("Eliminando el 1er elemento\n");
  eliminar (cola);
  mostrar (cola);
  printf ("Buscando el elemento 14\n");
  buscar (cola, 14);


  return 0;
}
