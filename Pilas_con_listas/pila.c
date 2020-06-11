#include "pila.h"
#include "Lista.h"
struct Pila *
crear_pila (int dato)
{
  struct Pila *pila = NULL;
  pila = (struct Pila *) malloc (sizeof (struct Pila));
  pila->lista= insertar_lista(pila->lista, dato);
  return pila;
}
struct Pila *
insertar (struct Pila *pila, int dato)
{
  struct Pila *nueva = crear (dato);
  nueva->lista = pila->lista;
  return nueva;
}

struct Pila *
eliminar (struct Pila *pila)
{ 
 pila->lista= eliminar_lista(pila->lista);
  return pila;
}

void
mostrar_pila (struct Pila *pila)
{
  struct Pila *aux = NULL;
  aux = crear (-123);
  /*while (pila != NULL)
    {
      printf ("%d ", pila->lista->dato);
      aux->lista->dato = pila->lista->dato;
      aux->lista = pila->lista;
      pila = pila->lista;
    }*/
  mostrar(pila->lista);
  free (pila);
  while (aux != NULL)
    {
      if (aux->lista != NULL)
	{
	  pila->lista->dato = aux->lista->dato;
	  pila->lista = aux->lista;
	}
      aux = aux->lista;
    }
  free (aux);
}
