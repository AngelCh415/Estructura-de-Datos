#include "Lista.h"

int
main ()
{
  int dato = 0;
  struct Lista *lista;
  lista = NULL;
  lista = crear (5);
  lista = insertar (lista, 48);
  lista = insertar (lista, -14);
  lista = insertar (lista, 14);
  lista = insertar (lista, 15);
  lista = insertar (lista, 100);
  mostrar (lista);
  printf ("\n");
  printf ("Buscando el dato\n");
  scanf ("%d", &dato);
  buscar (lista, dato);
  printf ("Eliminando de la lista: \n");
  lista = eliminar (lista);
  mostrar (lista);
  printf ("\n");
  printf ("Buscando el dato\n");
  scanf ("%d", &dato);
  buscar (lista, dato);
  mostrar (lista);
  return 0;
}
