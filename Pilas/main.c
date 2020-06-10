#include "pila.h"

int
main (void)
{

  int tope = -1;
  printf ("Agregando elementos 5,15 y 20: \n");
  insertar (pila, 5, &tope);
  insertar (pila, 15, &tope);
  insertar (pila, 20, &tope);
  printf ("Mostrando y eliminando de la pila: \n");
  mostrar_eliminar (pila, &tope);
  mostrar_eliminar (pila, &tope);
  mostrar_eliminar (pila, &tope);
  mostrar_eliminar (pila, &tope);
  return 0;
}
