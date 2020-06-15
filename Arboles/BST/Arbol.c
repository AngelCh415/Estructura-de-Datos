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
void mostrar_1 (struct Arbol *raiz){
  if(raiz==NULL){
    return ;
  }
  printf ("%d ", raiz->dato);
  mostrar_1(raiz->izquierda);
  mostrar_1(raiz->derecha);
}
void mostrar_2 (struct Arbol *raiz){
  if(raiz==NULL){
    return ;
  }
  mostrar_2(raiz->izquierda);
  printf ("%d ", raiz->dato);
  mostrar_2(raiz->derecha);

}
void mostrar_3 (struct Arbol *raiz){
  if(raiz==NULL){
    return ;
  }
  mostrar_3(raiz->derecha);
  mostrar_3(raiz->izquierda);
  printf ("%d ", raiz->dato);
}