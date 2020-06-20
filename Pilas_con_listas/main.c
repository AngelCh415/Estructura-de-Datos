#include "pila.h"

int
main (void)
{
  struct Pila *pila = NULL;
  printf ("Insertando en la pila en este ordem 20,16,146,106\n");
  pila = crear_pila (20);
  pila = insertar_pila (pila, 16);
  pila = insertar_pila (pila, 146);
  pila = insertar_pila (pila, 106);
  mostrar_pila (pila);
  printf ("Eliminando un elemento de la pila\n");
  pila = eliminar_pila (pila);
  mostrar_pila (pila);
  return 0;
}
