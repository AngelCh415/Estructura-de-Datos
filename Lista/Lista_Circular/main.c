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
  lista = insertar_circular (lista, 60);
  lista = insertar_circular (lista, 70);
  printf ("Imprimiendo lista circular\n");
  mostrar (lista);
  printf ("\n");
  printf ("Eliminando el 30 elemento de la lista\n");
  lista = eliminar_dato (lista, 30);
  printf ("Imprimiendo lista circular\n");
  mostrar (lista);
  printf ("\n");
  printf ("Eliminando al final de la lista\n ");
  lista = eliminar_final (lista);
  printf ("Imprimiendo lista circular\n");
  mostrar (lista);
  printf ("\n");
  printf ("Eliminando al inicio de la lista\n");
  lista = eliminar_inicio (lista);
  printf ("Imprimiendo lista circular\n");
  mostrar (lista);
  printf ("\n");
  printf ("Ingrese un nodo a buscar\n");
  scanf ("%d", &n);
  if (buscar (lista, n) == 1)
    {
      printf ("Nodo encontrado\n");
    }
  else
    {
      printf ("No existe el nodo\n");
    }
  printf ("\n");
  mostrar (lista);
  return 0;
}
