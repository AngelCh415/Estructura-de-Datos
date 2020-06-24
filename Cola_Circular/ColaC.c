#include "ColaC.h"

void
crearCola (cola * miCola)
{
  miCola->dato = malloc (5 * sizeof (int));
  miCola->frente = 0;
  miCola->cantidadElementos = 0;
  miCola->maxi = 5;
}

int
colaVacia (cola * miCola)
{
  if (miCola->cantidadElementos == 0)
    {
      return 1;
    }

  return 0;
}

int
colaLlena (cola * miCola)
{
  if (miCola->cantidadElementos == miCola->maxi)
    {
      return 1;
    }
  return 0;
}

int
calcularUbicacion (cola * miCola)
{
  return (miCola->frente + miCola->cantidadElementos) % miCola->maxi;
}

int
calcularFrente (cola * miCola)
{
  return (miCola->frente + 1) % miCola->maxi;
}

void
push (cola * miCola, int dato)
{
  if (colaLlena (miCola) == 1)
    {
      miCola->dato = (int *) realloc (miCola->dato, sizeof (int) * 5);
      miCola->maxi = 5 * miCola->maxi;

    }
  int ubicacion;
  ubicacion = calcularUbicacion (miCola);
  *(miCola->dato + ubicacion) = dato;
  miCola->cantidadElementos++;
}


int
pop (cola * miCola)
{
  if (colaVacia (miCola) == 1)
    {
      return -1;
    }
  int auxiliar;
  auxiliar = *(miCola->dato + miCola->frente);
  miCola->frente = calcularFrente (miCola);
  miCola->cantidadElementos--;
  return auxiliar;
}

void
mostrarCola (cola * miCola)
{
  cola colaAuxiliar;
  int aux = 0;
  colaAuxiliar = *miCola;
  if (colaVacia (&colaAuxiliar))
    {
      printf ("Cola Vacia");
    }
  else
    {
      do
	{
	  aux = pop (&colaAuxiliar);
	  printf ("%d ", aux);
	}
      while (!colaVacia (&colaAuxiliar));
    }
}
