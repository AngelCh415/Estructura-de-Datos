#include "ListaD.h"

struct ListaD *
crear_lista_doble (int dato)
{
  struct ListaD *nueva = NULL;
  nueva = (struct ListaD *) malloc (sizeof (struct ListaD));
  if (nueva == NULL)
    {
      return NULL;
    }
  nueva->dato = dato;
  nueva->siguiente = NULL;
  nueva->anterior = NULL;
  return nueva;
}

struct ListaD *
insertar_en_doble (struct ListaD *lista, int dato)
{
  struct ListaD *nueva_lista = crear_lista_doble (dato);
  lista->anterior = nueva_lista;
  nueva_lista->siguiente = lista;
  nueva_lista->anterior = NULL;
  lista = nueva_lista;
  return lista;
}

void
mostrar (struct ListaD *lista)
{
  while (lista != NULL)
    {
      printf ("%d ", (*lista).dato);
      lista = lista->siguiente;
    }
}

void
mostrar_re (struct ListaD *lista)
{
  while (lista != NULL)
    {
      printf ("%d ", lista->dato);
      lista = lista->anterior;
    }
}

struct ListaD *
buscar_ultimo_doble (struct ListaD *lista)
{
  struct ListaD *aux = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  aux = lista;
  while (aux->siguiente != NULL)
    {
      aux = aux->siguiente;
    }
  return aux;
}

struct ListaD *
eliminar_en_doble_inicio (struct ListaD *lista)
{
  if (lista == NULL)
    {
      return NULL;
    }
  struct ListaD *aux = lista->siguiente;

  lista->dato = 0;
  lista->siguiente = NULL;
  lista->anterior = NULL;
  free (lista);
  aux->anterior = NULL;
  return aux;
}

struct ListaD *
eliminar_en_doble_dato (struct ListaD *lista, int dato)
{
  struct ListaD *aux = NULL;
  struct ListaD *anterior = NULL;
  struct ListaD *ultimo = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  aux = lista;
  ultimo = lista;
  ultimo = buscar_ultimo_doble (lista);
  while (aux != NULL)
    {
      if (aux->dato == dato)
	{
	  if (aux == ultimo)
	    {
	      anterior->siguiente = NULL;
	      ultimo = anterior;
	      return lista;
	    }
	  anterior->siguiente = aux->siguiente;
	  aux->siguiente->anterior = anterior;
	  return lista;

	}
      anterior = aux;
      aux = aux->siguiente;
    }
  free (aux);
  free (ultimo);
  free (anterior);
  return lista;
}

int
buscar_doble (struct ListaD *lista, int dato)
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
