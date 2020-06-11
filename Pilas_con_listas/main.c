#include "pila.h"

int
main (void)
{
  struct Pila *pila = NULL;
  pila = crear_pila (20);
  pila = insertar_pila (pila,2);
  pila = mostrar_pila(pila);
  pila = eliminar (pila);
  pila = mostrar_pila(pila);
  pila = eliminar (pila);
  pila = mostrar_pila(pila);
  return 0;
}
