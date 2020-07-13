#include "ArbolAVL.h"
struct AVL *
crear_AVL (int dato)
{
  struct AVL *nuevo = NULL;
  nuevo = (struct AVL *) malloc (sizeof (struct AVL));
  if (nuevo == NULL)
    {
      return NULL;
    }
  nuevo->dato = dato;
  nuevo->izquierda = NULL;
  nuevo->derecha = NULL;
  nuevo->balance = 0;
  return nuevo;
}

int
altura (struct AVL *raiz)
{
  int maxi = 0;
  if (raiz == NULL)
    {
      return -1;
    }
  maxi = raiz->balance;
  return maxi++;
}

struct AVL *
rotacion_izq (struct AVL *raiz)
{
  int altura_izq = 0;
  int altura_der = 0;
  int altura_izq_aux = 0;
  int altura_der_aux = 0;
  struct AVL *aux = NULL;
  aux = raiz->izquierda;
  raiz->izquierda = aux->derecha;
  aux->derecha = raiz;
  altura_der = altura (raiz->derecha);
  altura_izq = altura (raiz->izquierda);
  if (altura_der > altura_izq)
    {
      raiz->balance = altura_der;
    }
  else
    {
      raiz->balance = altura_izq;
    }
  altura_der_aux = altura (aux->derecha);
  altura_izq_aux = altura (aux->izquierda);
  if (altura_der_aux > altura_izq_aux)
    {
      aux->balance = altura_der_aux;
    }
  else
    {
      aux->balance = altura_izq_aux;
    }
  return aux;
}

struct AVL *
rotacion_der (struct AVL *raiz)
{
  int altura_izq = 0;
  int altura_der = 0;
  int altura_izq_aux = 0;
  int altura_der_aux = 0;
  struct AVL *aux = NULL;
  aux = raiz->derecha;
  raiz->derecha = aux->izquierda;
  aux->izquierda = raiz;
  altura_der = altura (raiz->derecha);
  altura_izq = altura (raiz->izquierda);
  if (altura_der > altura_izq)
    {
      raiz->balance = altura_der;
    }
  else
    {
      raiz->balance = altura_izq;
    }
  altura_der_aux = altura (aux->derecha);
  altura_izq_aux = altura (aux->izquierda);
  if (altura_der_aux > altura_izq_aux)
    {
      aux->balance = altura_der_aux;
    }
  else
    {
      aux->balance = altura_izq_aux;
    }
  return aux;
}

struct AVL *
rotacion_doble_izq (struct AVL *raiz)
{
  struct AVL *aux = NULL;
  raiz->izquierda = rotacion_der (raiz->izquierda);
  aux = rotacion_izq (raiz);
  return aux;
}

struct AVL *
rotacion_doble_der (struct AVL *raiz)
{
  struct AVL *aux = NULL;
  raiz->derecha = rotacion_izq (raiz->derecha);
  aux = rotacion_der (raiz);
  return aux;
}

struct AVL *
insertar_AVL (struct AVL *raiz, int dato)
{
  int altura_izq = 0;
  int altura_der = 0;
  if (raiz == NULL)
    {
      return crear_AVL (dato);
    }
  if (dato < raiz->dato)
    {
      raiz->izquierda = insertar_AVL (raiz->izquierda, dato);
    }
  else
    {
      raiz->derecha = insertar_AVL (raiz->derecha, dato);
    }
  altura_der = altura (raiz->derecha);
  altura_izq = altura (raiz->izquierda);
  raiz->balance = altura_izq - altura_der;
  if (raiz->balance > 1)
    {
      /*Balanceo hacia izquierda */
      if (raiz->dato < raiz->izquierda->dato)
	{
	  raiz = rotacion_izq (raiz);
	}
      else
	{
	  raiz = rotacion_doble_izq (raiz);
	}
    }
  else if (raiz->balance < -1)
    {
      /*Balanceo hacia derecha */
      if (raiz->dato > raiz->derecha->dato)
	{
	  raiz = rotacion_der (raiz);
	}
      else
	{
	  raiz = rotacion_doble_der (raiz);
	}
    }
  if (raiz->izquierda == NULL && raiz->derecha != NULL)
    {
      raiz->balance = raiz->derecha->balance++;
    }
  else if (raiz->izquierda != NULL && raiz->derecha == NULL)
    {
      raiz->balance = raiz->izquierda->balance++;
    }
  else
    {
      altura_der = altura (raiz->derecha);
      altura_izq = altura (raiz->izquierda);
      if (altura_der > altura_izq)
	{
	  raiz->balance = altura_der;
	}
      else
	{
	  raiz->balance = altura_izq;
	}
    }
  return raiz;
}

void
mostrar_1 (struct AVL *raiz)
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
mostrar_2 (struct AVL *raiz)
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
mostrar_3 (struct AVL *raiz)
{
  if (raiz == NULL)
    {
      return;
    }
  mostrar_3 (raiz->derecha);
  printf ("%d ", raiz->dato);
  mostrar_3 (raiz->izquierda);
}
