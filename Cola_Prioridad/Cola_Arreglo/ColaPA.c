#include "ColaPA.h"
void
llenar (int *cola)
{
  int i = 0;
  for (i = 0; i < 102; i++)
    {
      cola[i] = -1;
    }
}

void
insertar (int *cola, int dato, int prioridad)
{
  cola[prioridad] = dato;
}

void
mostrar (int *cola)
{
  int i = 0;
  for (i = 0; i < 102; i++)
    {
      if (cola[i] != -1)
	{
	  printf ("%d con prioridad %d \n", cola[i], i);
	}
    }
}

void
eliminar (int *cola)
{
  int i = 0;
  for (i = 0; i < 102; i++)
    {
      if (cola[i] != -1)
	{
	  printf ("Dato eliminado: %d \n", cola[i]);
	  cola[i] = -1;
	  return;
	}
    }
  printf ("Cola vacia\n");
}

void
buscar (int *cola, int dato)
{
  int i = 0;
  for (i = 0; i < 102; i++)
    {
      if (cola[i] == dato)
	{
	  printf ("Dato encontrado en prioridad: %d \n", i);
	  return;
	}
    }
  printf ("No existe el dato\n");
}
