#include "pila.h"
struct Pila *
crear (int dato)
{
  struct Pila *pila = NULL;
  pila = (struct Pila *) malloc (sizeof (struct Pila));
  pila->dato = dato;
  pila->siguiente = NULL;
  return pila;
}

struct Pila *
insertar (struct Pila *pila, int dato)
{
  struct Pila *nueva = crear (dato);
  nueva->siguiente = pila;
  return nueva;
}

struct Pila *
eliminar (struct Pila *pila)
{
  struct Pila *aux = pila->siguiente;
  free (pila);
  pila = aux;
  return pila;
}

void
mostrar (struct Pila *pila)
{
  struct Pila *aux = NULL;
  aux = crear (-123);
  while (pila != NULL)
    {
      printf ("%d ", pila->dato);
      aux->dato = pila->dato;
      aux->siguiente = pila->siguiente;
      pila = pila->siguiente;
    }
  free (pila);
  while (aux != NULL)
    {
      if (aux->siguiente != NULL)
	{
	  pila->dato = aux->dato;
	  pila->siguiente = aux->siguiente;
	}
      aux = aux->siguiente;
    }
  free (aux);
}
