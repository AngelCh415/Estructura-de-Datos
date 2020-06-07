#include "Lista.h"

int
main ()
{
  int i = 0;
  int total = 0;
  int dato = 0;
  struct Lista *lista;
  lista = NULL;
  printf ("Ingrese la cantidad de datos: ");
  scanf ("%d", &total);
  scanf ("%d", &dato);
  lista = crear (dato);
  for (i = 1; i < total; i++)
    {
      scanf ("%d", &dato);
      lista = insertar (lista, dato);
    }
  printf ("Los datos mostrados son: ");
  mostrar (lista);
  return 0;
}
