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
  if (lista == NULL)
    {
      printf ("Lista vacia\n");
      return;
    }
  struct ListaC *inicio = lista;
  do
    {
      printf ("%d->", inicio->dato);
      inicio = inicio->siguiente;
    }
  while (inicio != lista);
}

struct ListaC *
eliminar (struct ListaC *lista)
{
  if (lista == NULL)
    {
      return NULL;
    }
  struct ListaC *aux = lista->siguiente;
  lista->siguiente = aux->siguiente;
  free (aux);
  return lista;
}

void
buscar (struct ListaC *lista, int dato)
{
  if (lista == NULL)
    {
      printf ("Lista vacia\n");
      return;
    }
  struct ListaC *inicio = lista;
  struct ListaC *final = buscar_fin (lista);
  if (dato == final->dato)
    {
      printf ("Dato encontrado \n");
      return;
    }
  while (inicio != final)
    {
      if (inicio->dato == dato)
	{
	  printf ("Dato encontrado\n");
	  return;
	}
      inicio = inicio->siguiente;
    }
  printf ("No existe dato\n");
}
