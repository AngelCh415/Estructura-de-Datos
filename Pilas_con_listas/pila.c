#include "pila.h"
#include "Lista.h"
struct Pila *
crear_pila (int dato)
{
  struct Pila *pila = NULL;
  pila = (struct Pila *) malloc (sizeof (struct Pila));
  pila->lista= insertar_lista(pila->lista, dato);
  return pila;
}
struct Pila *
insertar_pila (struct Pila *pila, int dato)
{
  pila->lista = insertar_lista(pila->lista,dato);
  return pila;
}

struct Pila *
eliminar (struct Pila *pila)
{ 
  pila->lista= eliminar_lista(pila->lista);
  return pila;
}
int top ( struct Pila *pila)
{
    int dato = 0; 
    dato = pila->lista->dato;
    return dato;
}
struct Pila *
mostrar_pila (struct Pila *pila)
{
  int dato_mostrado = 0;
  struct Pila *aux = NULL;
  aux = (struct Pila * ) malloc(sizeof(struct Pila));
  while(pila->lista!= NULL){
      dato_mostrado= top(pila);
      printf("%d ",dato_mostrado);
      aux = insertar_pila(aux, dato_mostrado);
      pila->lista= pila->lista->siguiente;
  }
    /*while(aux->lista!=NULL){
    dato_mostrado= top(aux);
    pila = insertar_pila(pila,dato_mostrado);
    aux->lista = aux->lista->siguiente;
  }*/
  free(aux);
  dato_mostrado=0;
/* funcion top == similar a eliminar pero recupero dato
  pop(pila original) // recupero el dato
  muestro
  push(pila aux
  //Sin free para la original

  Para original
 
  pop(aux) // recupero dato
  push(original)
*/
  //mostrar_lista(pila->lista);
  return pila;
}
