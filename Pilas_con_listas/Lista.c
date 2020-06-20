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
insertar_lista (struct Lista *lista, int dato)
{
  struct Lista *nueva_lista = crear (dato);
  nueva_lista->siguiente = lista;
  lista = nueva_lista;
  return lista;
}

struct Lista *
eliminar_lista_inicio (struct Lista *lista)
{
  struct Lista *aux = lista->siguiente;
  free (lista);
  lista = aux;
  return lista;
}

struct Lista *
eliminar_lista_dato (struct Lista *lista, int dato)
{
  struct Lista *aux = NULL;
  struct Lista *anterior = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  aux = lista;
  while (aux != NULL && aux->dato != dato)
    {
      anterior = aux;
      aux = aux->siguiente;
    }
  if (aux != NULL)
    {
      anterior->siguiente = aux->siguiente;
      free (aux);
    }
  return lista;
}

struct Lista *
eliminar_lista_final (struct Lista *lista)
{
  struct Lista *aux = lista;
  while (aux->siguiente != NULL)
    {
      aux = aux->siguiente;
    }
  lista = eliminar_lista_dato (lista, aux->dato);
  return lista;
}

void
mostrar_lista (struct Lista *lista)
{
  while (lista != NULL)
    {
      printf ("%d ", (*lista).dato);
      lista = lista->siguiente;
    }
}

int
buscar_lista (struct Lista *lista, int dato)
{
  while (lista != NULL)
    {
      if (lista->dato == dato)
	{
	  return 1;
	}
      lista = lista->siguiente;
    }
  return 0;
}
