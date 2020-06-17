#include "Lista.h"

struct Lista *
crear (int dato)
{
  struct Lista *nueva = NULL;
  nueva = (struct Lista *) malloc (sizeof (struct Lista));
  if (nueva == NULL)
    {
      return NULL;
    }
  nueva->dato = dato;
  nueva->siguiente = NULL;
  return nueva;
}

struct Lista *
insertar (struct Lista *lista, int dato)
{
  struct Lista *nueva_lista = crear (dato);
  nueva_lista->siguiente = lista;
  lista = nueva_lista;
  return lista;
}

struct Lista *
eliminar (struct Lista *lista)
{
  struct Lista *aux = lista->siguiente;
  free (lista);
  lista = aux;
  return lista;
}

void
mostrar (struct Lista *lista)
{
  while (lista != NULL)
    {
      printf ("%d ", (*lista).dato);
      lista = lista->siguiente;
    }
}

void
buscar (struct Lista *lista, int dato)
{
  while (lista != NULL)
    {
      if (lista->dato == dato)
	{
	  printf ("Dato encontrado\n");
	  return;
	}
      lista = lista->siguiente;
    }
  printf ("No existe el dato\n");
}
