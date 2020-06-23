#include "Vector.h"

int
main (void)
{

  struct Vector *vector = NULL;
  vector = crear_vector (5);
  vector = insertar_vector (vector, 10);
  vector = insertar_vector (vector, 15);
  vector = insertar_vector (vector, 20);
  printf ("\nBuscando el elemento 15:\n");
  if (buscar (vector, 15) == 1)
    {
      printf ("Elemento encontrado\n");
    }
  else
    {
      printf ("Elemento no encontrado\n");
    }
  mostrar (vector);
  printf ("\n Eliminando el 10 del vector:\n");
  vector = eliminar (vector, 10);
  printf ("\n");
  mostrar (vector);
  return 0;
}
