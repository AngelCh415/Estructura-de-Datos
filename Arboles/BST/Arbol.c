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
