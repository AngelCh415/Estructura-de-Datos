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
  printf ("\n");
  printf ("Eliminación de la mitad de los datos:\n");
  total = total / 2;
  for (i = 0; i < total; i++)
    {
      lista = eliminar (lista);
    }
  printf ("Los datos después de la eliminación: \n");
  mostrar (lista);
  return 0;
}
