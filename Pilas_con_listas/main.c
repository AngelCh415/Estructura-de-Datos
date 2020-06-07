#include "pila.h"

int
main (void)
{
  int i = 0;
  int total = 0;
  int ele = 0;
  int eliminacion = 0;
  struct Pila *pila = NULL;
  printf ("Ingrese los elementos de la pila; \n");
  scanf ("%d", &total);
  printf ("Ingrese el dato 1: \n");
  scanf ("%d", &ele);
  pila = crear (ele);
  for (i = 1; i < total; i++)
    {
      printf ("Ingrese el dato %d: \n", i + 1);
      scanf ("%d", &ele);
      pila = insertar (pila, ele);
    }
  i = 0;
  printf ("La pila es: ");
  mostrar (pila);
  printf ("Desea elimiar datos de la pila? 1)Si 2)No \n");
  scanf ("%d", &eliminacion);
  if (eliminacion == 1)
    {
      printf ("Ingrese el numero de elemtos a eliminar: ");
      scanf ("%d", &total);
      for (i; i < total; i++)
	{

	  pila = eliminar (pila);
	}
      printf ("Pila despues de eliminar %d elemento(s) \n", total);
      mostrar (pila);
    }
  printf ("Listo :D");
  return 0;
}
