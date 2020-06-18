#include "ListaC.h"


int
main (void)
{
  struct ListaC *lista = NULL;
  int n = 0;
  lista = insertar_circular (lista, 10);
  lista = insertar_circular (lista, 20);
  lista = insertar_circular (lista, 30);
  lista = insertar_circular (lista, 40);
  lista = insertar_circular (lista, 50);
  printf ("Imprimiendo lista circular\n");
  mostrar (lista);
  printf ("\n");
  printf ("Eliminando el segundo elemento de la lista\n");
  lista = eliminar (lista);
  printf ("Imprimiendo lista circular\n");
  mostrar (lista);
  printf ("\n");
  printf ("Ingrese un nodo a buscar\n");
  scanf ("%d", &n);
  buscar (lista, n);
  printf ("\n");
  mostrar (lista);
  return 0;
}
