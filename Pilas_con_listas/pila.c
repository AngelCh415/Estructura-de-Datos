#include "pila.h"
#include "Lista.h"
struct Pila *
crear_pila (int dato)
{
  struct Pila *pila = NULL;
  pila = (struct Pila *) malloc (sizeof (struct Pila));
  if (pila == NULL)
    {
      return NULL;
    }
  pila->lista = insertar_lista (pila->lista, dato);
  return pila;
}

struct Pila *
insertar_pila (struct Pila *pila, int dato)
{
  if (pila == NULL)
    {
      pila = crear_pila (dato);
    }
  else
    {
      pila->lista = insertar_lista (pila->lista, dato);
    }
  return pila;
}

struct Pila *
eliminar_pila (struct Pila *pila)
{
  pila->lista = eliminar_lista_inicio (pila->lista);
  return pila;
}

int
top (struct Pila *pila)
{
  int dato = 0;
  dato = pila->lista->dato;
  return dato;
}

int
estaVacia (struct Pila *pila)
{
  if (pila != NULL && pila->lista != NULL)
    {
      return 0;
    }
  return 1;
}

void
mostrar_pila (struct Pila *pila)
{
  int dato_mostrado = 0;
  struct Pila *aux = NULL;
  if (pila == NULL)
    {
      return;
    }
  while (estaVacia (pila) == 0)
    {
      dato_mostrado = top (pila);
      pila->lista = eliminar_lista_inicio (pila->lista);
      printf ("%d\n", dato_mostrado);
      aux = insertar_pila (aux, dato_mostrado);
    }
  while (estaVacia (aux) == 0)
    {
      dato_mostrado = top (aux);
      aux->lista = eliminar_lista_inicio (aux->lista);
      pila = insertar_pila (pila, dato_mostrado);
    }
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
}
