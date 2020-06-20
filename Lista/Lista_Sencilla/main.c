#include "Lista.h"

int
main ()
{
  int dato = 0;
  struct Lista *lista;
  lista = NULL;
  lista = crear (5);
  lista = insertar_lista (lista, 48);
  lista = insertar_lista (lista, -14);
  lista = insertar_lista (lista, 14);
  lista = insertar_lista (lista, 15);
  lista = insertar_lista (lista, 100);
  mostrar_lista (lista);
  printf ("\n");
  printf ("Buscando el dato\n");
  scanf ("%d", &dato);
  if (buscar_lista (lista, dato) == 1)
    {
      printf ("Se encontro el dato");
    }
  else
    {
      printf ("No existe el dato");
    }
  printf ("\n");
  printf ("Eliminando al inicio de la lista: \n");
  lista = eliminar_lista_inicio (lista);
  printf ("\n");
  mostrar_lista (lista);
  printf ("\n");
  printf ("Eliminando de la lista el -14:");
  lista = eliminar_lista_dato (lista, -14);
  printf ("\n");
  printf ("Eliminando al final\n");
  lista = eliminar_lista_final (lista);
  printf ("\n");
  mostrar_lista (lista);
  printf ("\n");
  printf ("Buscando el dato\n");
  scanf ("%d", &dato);
  if (buscar_lista (lista, dato) == 1)
    {
      printf ("Se encontro el dato");
    }
  else
    {
      printf ("No existe el dato");
    }
  mostrar_lista (lista);
  return 0;
}
