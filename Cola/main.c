#include "Cola.h"

int
main (void)
{
  int tope = 0;
  int dato = 0;
  int n = 0;
  int ini = 1;
  printf ("Ingrese el valor de la cola: ");
  scanf ("%d", &n);
  for (int i = 0; i < n; i++)
    {
      printf ("Ingrese el valor %d: ", i + 1);
      scanf ("%d", &dato);
      push (cola, dato, &tope);
    }
  printf("Eliminadno y mostrando la cola: \n");
  for (int i = 0; i < n; i++)
    {
      pop (cola, &ini, tope);
    }

  return 0;
}
