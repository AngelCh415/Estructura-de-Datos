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
  struct Pila *nueva = crear_pila(dato);
  nueva->lista = pila->lista;
  return nueva;
}

struct Pila *
eliminar (struct Pila *pila)
{ 
  pila->lista= eliminar_lista(pila->lista);
  return pila;
}

struct Pila *
mostrar_pila (struct Pila *pila)
{
  struct Pila *aux = NULL;
  aux = (struct Pila *) malloc (sizeof(struct Pila));
  aux = pila;
  mostrar_lista (pila->lista);
  free(pila);
  while(aux->lista!=NULL){
    pila->lista= aux->lista;
    aux->lista = aux->lista->siguiente;
  }
  return pila;
}
