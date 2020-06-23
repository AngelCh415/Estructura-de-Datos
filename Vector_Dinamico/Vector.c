#include "Vector.h"

struct Vector *
crear_vector (int dato)
{
  struct Vector *nuevo = NULL;
  nuevo = (struct Vector *) malloc (sizeof (struct Vector));
  nuevo->arre = malloc (2 * sizeof (int));
  *(nuevo->arre) = dato;
  nuevo->elementos = 1;
  nuevo->capacidad = 2;
  return nuevo;

}

struct Vector *
insertar_vector (struct Vector *vector, int dato)
{
  int i = 0;
  int tope = 0;
  i = vector->elementos;
  tope = 2 * i;
  if ((vector->capacidad - vector->elementos + 1) <= 0)
    {
      vector =
	(struct Vector *) realloc (vector, sizeof (struct Vector) * tope);
      vector->arre = (int *) realloc (vector->arre, sizeof (int) * tope);
      vector->capacidad = tope;
    }
  *(vector->arre + i) = dato;
  vector->elementos++;
  return vector;
}

int
buscar (struct Vector *vector, int dato)
{
  int i = 0;
  int n = 0;
  if (vector->elementos == 0)
    {
      return 0;
    }
  n = vector->elementos;
  for (i = 0; i < n; i++)
    {
      if (*(vector->arre + i) == dato)
	{
	  return 1;
	}
    }
  return 0;
}

struct Vector *
eliminar (struct Vector *vector, int dato)
{
  int n = 0;
  int i = 0;
  int pos = 0;
  if (vector->elementos == 0)
    {
      return vector;
    }
  n = vector->elementos;
  for (i = 0; i < n; i++)
    {
      if (*(vector->arre + i) == dato)
	{
	  pos = i;
	  vector->elementos--;
	  break;
	}
    }
  for (i = 0; i < n; i++)
    {
      if (i < pos)
	{
	  *(vector->arre + i) = *(vector->arre + i);
	}
      else
	{
	  *(vector->arre + i) = *(vector->arre + i + 1);
	}
    }
  return vector;
}

void
mostrar (struct Vector *vector)
{
  int n = 0;
  int i = 0;
  if (vector->elementos == 0)
    {
      printf ("Arreglo vacio \n");
      return;
    }
  n = vector->elementos;
  for (i = 0; i < n; i++)
    {
      printf ("%d ", *(vector->arre + i));
    }
}
