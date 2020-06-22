#include "ListaC.h"

struct ListaC *
crear_circular (int dato)
{
  struct ListaC *nueva = NULL;
  nueva = (struct ListaC *) malloc (sizeof (struct ListaC));
  if (nueva == NULL)
    {
      return NULL;
    }
  nueva->dato = dato;
  return nueva;
}

struct ListaC *
buscar_fin (struct ListaC *lista)
{
  struct ListaC *aux = lista;
  while (aux->siguiente != lista)
    {
      aux = aux->siguiente;
    }
  return aux;
}

struct ListaC *
insertar_circular (struct ListaC *lista, int dato)
{
  struct ListaC *nueva = crear_circular (dato);
  if (lista == NULL)
    {
      lista = nueva;
      lista->siguiente = nueva;
    }
  else
    {
      struct ListaC *final = buscar_fin (lista);
      nueva->siguiente = lista;
      final->siguiente = nueva;

    }
  return lista;
}

void
mostrar (struct ListaC *lista)
{
  struct ListaC *inicio = NULL;
  if (lista == NULL)
    {
      printf ("Lista vacia\n");
      return;
    }
  inicio = lista;
  do
    {
      printf ("%d->", inicio->dato);
      inicio = inicio->siguiente;
    }
  while (inicio != lista);
  printf ("%d", inicio->dato);
}

struct ListaC *
eliminar_dato (struct ListaC *lista, int dato)
{
  struct ListaC *inicio = NULL;
  struct ListaC *final = NULL;
  struct ListaC *anterior = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  inicio = lista;
  final = buscar_fin (lista);
  while (inicio != final)
    {
      if (inicio->dato == dato)
	{
	  anterior->siguiente = inicio->siguiente;
	  free (inicio);
	  return lista;
	}
      anterior = inicio;
      inicio = inicio->siguiente;
    }
  return lista;
}

struct ListaC *
eliminar_final (struct ListaC *lista)
{
  struct ListaC *aux = NULL;
  struct ListaC *anterior = NULL;
  struct ListaC *bandera = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  aux = lista;
  bandera = buscar_fin (lista);
  while (aux != bandera)
    {
      anterior = aux;
      aux = aux->siguiente;
    }
  anterior->siguiente = aux->siguiente;
  free (aux);
  return lista;
}

struct ListaC *
eliminar_inicio (struct ListaC *lista)
{
  struct ListaC *aux = NULL;
  struct ListaC *ultimo = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  aux = lista;
  ultimo = buscar_fin (lista);
  lista = lista->siguiente;
  ultimo->siguiente = lista;
  free (aux);
  return lista;
}

int
buscar (struct ListaC *lista, int dato)
{
  struct ListaC *inicio = NULL;
  struct ListaC *final = NULL;
  if (lista == NULL)
    {
      return 0;
    }
  inicio = lista;
  final = buscar_fin (lista);
  if (dato == final->dato)
    {
      return 1;
    }
  while (inicio != final)
    {
      if (inicio->dato == dato)
	{
	  return 1;
	}
      inicio = inicio->siguiente;
    }
  return 0;
}
