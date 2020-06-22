#include "Arbol.h"

struct Arbol *
crear_Arbol (int dato)
{
  struct Arbol *nuevo = NULL;
  nuevo = (struct Arbol *) malloc (sizeof (struct Arbol));
  if (nuevo == NULL)
    {
      return NULL;
    }
  nuevo->dato = dato;
  nuevo->izquierda = NULL;
  nuevo->derecha = NULL;
  return nuevo;
}

int
buscar_arbol (struct Arbol *raiz, int dato)
{
  if (raiz == NULL)
    {
      return 0;
    }
  while (raiz != NULL)
    {
      if (raiz->dato == dato)
	{
	  return 1;
	}
      if (dato < raiz->dato)
	{
	  raiz = raiz->izquierda;
	}
      else
	{
	  raiz = raiz->derecha;
	}
    }
  return 0;
}

struct Arbol *
insertar_Arbol (struct Arbol *raiz, int dato)
{
  if (raiz == NULL)
    {
      return crear_Arbol (dato);
    }
  else if (raiz->dato < dato)
    {
      raiz->derecha = insertar_Arbol (raiz->derecha, dato);
    }
  else if (raiz->dato > dato)
    {
      raiz->izquierda = insertar_Arbol (raiz->izquierda, dato);
    }
  return raiz;
}

void
mostrar_1 (struct Arbol *raiz)
{
  if (raiz == NULL)
    {
      return;
    }
  printf ("%d ", raiz->dato);
  mostrar_1 (raiz->izquierda);
  mostrar_1 (raiz->derecha);
}

void
mostrar_2 (struct Arbol *raiz)
{
  if (raiz == NULL)
    {
      return;
    }
  mostrar_2 (raiz->izquierda);
  printf ("%d ", raiz->dato);
  mostrar_2 (raiz->derecha);

}

void
mostrar_3 (struct Arbol *raiz)
{
  if (raiz == NULL)
    {
      return;
    }
  mostrar_3 (raiz->derecha);
  printf ("%d ", raiz->dato);
  mostrar_3 (raiz->izquierda);
}

struct Arbol *
eliminar_Arbol (struct Arbol *raiz, int dato)
{
  struct Arbol *nodo_padre = NULL;
  struct Arbol *nodo_eliminar = NULL;
  struct Arbol *nodo_bajo = NULL;
  struct Arbol *padre_nodo_bajo = NULL;
  if (raiz == NULL)
    {
      return NULL;
    }
  nodo_eliminar = raiz;
  while (nodo_eliminar->dato != dato)
    {
      nodo_padre = nodo_eliminar;
      if (dato < nodo_eliminar->dato)
	{
	  nodo_eliminar = nodo_eliminar->izquierda;
	}
      else
	{
	  nodo_eliminar = nodo_eliminar->derecha;
	}
      if (nodo_eliminar == NULL)
	{
	  break;
	}
    }
  if (nodo_eliminar == NULL)
    {
      return raiz;
    }
  if (nodo_eliminar->derecha == NULL && nodo_eliminar->izquierda == NULL)
    {
      if (nodo_padre->dato > nodo_eliminar->dato)
	{
	  nodo_padre->izquierda = NULL;
	}
      else
	{
	  nodo_padre->derecha = NULL;
	}
      free (nodo_eliminar);
      return raiz;
    }
  else if (nodo_eliminar->derecha == NULL)
    {
      if (nodo_padre->dato > nodo_eliminar->dato)
	{
	  nodo_padre->izquierda = nodo_eliminar->izquierda;
	}
      else
	{
	  nodo_padre->derecha = nodo_eliminar->izquierda;
	}
      free (nodo_eliminar);
      return raiz;
    }
  else if (nodo_eliminar->izquierda == NULL)
    {
      if (nodo_padre->dato > nodo_eliminar->dato)
	{
	  nodo_padre->izquierda = nodo_eliminar->derecha;
	}
      else
	{
	  nodo_padre->derecha = nodo_eliminar->derecha;
	}
      free (nodo_eliminar);
      return raiz;
    }
  nodo_bajo = nodo_eliminar->derecha;
  padre_nodo_bajo = nodo_eliminar;
  while (nodo_bajo->izquierda != NULL)
    {
      padre_nodo_bajo = nodo_bajo;
      nodo_bajo = nodo_bajo->izquierda;
    }
  nodo_eliminar->dato = nodo_bajo->dato;
  if (padre_nodo_bajo->derecha == nodo_bajo)
    {
      padre_nodo_bajo->derecha = nodo_bajo->derecha;
    }
  else
    {
      padre_nodo_bajo->izquierda = nodo_bajo->derecha;
    }
  free (nodo_bajo);
  return raiz;
}
