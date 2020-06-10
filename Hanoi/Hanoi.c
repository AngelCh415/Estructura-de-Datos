#include "Hanoi.h"

void
Hanoi (int n, char origen, char auxiliar, char destino)
{
  if (n == 1)
    {
      printf ("%c -> %c", origen, destino);
      printf ("\n");
    }
  else
    {
      Hanoi (n - 1, origen, destino, auxiliar);
      printf ("%c -> %c ", origen, destino);
      printf ("\n");
      Hanoi (n - 1, auxiliar, origen, destino);
    }
}
