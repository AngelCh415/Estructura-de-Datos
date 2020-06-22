#include "ListaCD.h"
struct ListaCD *
crear_lista_dc (int dato)
{
  struct ListaCD *nueva = NULL;
  nueva = (struct ListaCD *) malloc (sizeof (struct ListaCD));
  if (nueva == NULL)
    {
      return NULL;
    }
  nueva->dato = dato;
  nueva->siguiente = NULL;
  nueva->anterior = NULL;
  return nueva;
}

struct ListaCD *
buscar_ultimo (struct ListaCD *lista)
{
  struct ListaCD *aux = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  aux = lista;
  while (aux->siguiente != lista)
    {
      aux = aux->siguiente;
    }
  return aux;
}

struct ListaCD *
insertar_en_dc (struct ListaCD *lista, int dato)
{
  struct ListaCD *nuevo = NULL;
  struct ListaCD *ultimo = NULL;
  nuevo = crear_lista_dc (dato);
  if (lista == NULL)
    {
      lista = nuevo;
      lista->siguiente = lista;
      ultimo = lista;
      lista->anterior = ultimo;
      return lista;
    }
  else
    {
      ultimo = buscar_ultimo (lista);
      ultimo->siguiente = nuevo;
      nuevo->siguiente = lista;
      nuevo->anterior = ultimo;
      ultimo = nuevo;
      lista->anterior = ultimo;
      return lista;
    }
}

void
mostrar_dc (struct ListaCD *lista)
{
  struct ListaCD *aux = NULL;
  if (lista == NULL)
    {
      printf ("Lista vacia\n");
      return;
    }
  aux = lista;
  do
    {
      printf ("%d-> ", aux->dato);
      aux = aux->siguiente;
    }
  while (aux != lista);
  printf ("%d\n", aux->dato);
}

void
mostrar_re_dc (struct ListaCD *lista)
{
  struct ListaCD *ultimo = NULL;
  if (lista == NULL)
    {
      printf ("Lista vacia\n");
      return;
    }
  ultimo = buscar_ultimo (lista);
  do
    {
      printf ("%d->", ultimo->dato);
      ultimo = ultimo->anterior;
    }
  while (ultimo != lista);
  printf ("%d->", ultimo->dato);
  printf ("%d->", ultimo->anterior->dato);
}

int
buscar_en_dc (struct ListaCD *lista, int dato)
{
  struct ListaCD *inicio = NULL;
  struct ListaCD *final = NULL;
  if (lista == NULL)
    {
      return 0;
    }
  inicio = lista;
  final = buscar_ultimo (lista);
  if (final->dato == dato)
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


struct ListaCD *
eliminar_dato_dc (struct ListaCD *lista, int dato)
{
  struct ListaCD *aux = NULL;
  struct ListaCD *anterior = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  aux = lista;
  do
    {
      if (aux->dato == dato)
	{
	  anterior->siguiente = aux->siguiente;
	  aux->siguiente->anterior = anterior;
	  return lista;
	}
      anterior = aux;
      aux = aux->siguiente;
    }
  while (aux != lista);
  free (aux);
  free (anterior);
  return lista;
}

struct ListaCD *
eliminar_ini_dc (struct ListaCD *lista)
{
  struct ListaCD *aux = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  aux = buscar_ultimo (lista);
  lista = lista->siguiente;
  lista->anterior = aux;
  aux->siguiente = lista;
  return lista;
}

struct ListaCD *
eliminar_fin_dc (struct ListaCD *lista)
{
  struct ListaCD *ultimo = NULL;
  struct ListaCD *aux = NULL;
  if (lista == NULL)
    {
      return NULL;
    }
  ultimo = buscar_ultimo (lista);
  aux = lista;
  while (aux->siguiente->siguiente != lista)
    {				/* Sacando el anterior */
      aux = aux->siguiente;
    }
  ultimo = aux;
  ultimo->siguiente = lista;
  lista->anterior = ultimo;
  return lista;

}
