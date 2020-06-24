
#include "ColaC.h"
int
main ()
{
  cola miCola;
  crearCola (&miCola);
//Insertar, retirar MostrarCola
  push (&miCola, 5);
  push (&miCola, 10);
  push (&miCola, 15);
  push (&miCola, 20);
  push (&miCola, 25);
  push (&miCola, 30);
  printf ("\n");
  mostrarCola (&miCola);
  printf ("\n");
  printf ("Eliminando un elemento\n");
  pop (&miCola);
  mostrarCola (&miCola);
  printf ("\nAgregando el 4\n");
  push (&miCola, 4);
  printf ("\n");
  mostrarCola (&miCola);
}
