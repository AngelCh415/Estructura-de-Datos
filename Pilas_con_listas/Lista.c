#include "Lista.h"

struct Lista *
crear (int dato)
{
  struct Lista *nueva = NULL;
  nueva = (struct Lista *) malloc (sizeof (struct Lista));
  if (nueva == NULL)
    {
      return NULL;
    }
  nueva->dato = dato;
  nueva->siguiente = NULL;
  return nueva;
}

struct Lista *
insertar_lista (struct Lista *lista, int dato)
{
  struct Lista *nueva_lista = crear (dato);
  nueva_lista->siguiente = lista;
  lista = nueva_lista;
  return lista;
}

struct Lista *
eliminar_lista (struct Lista *lista)
{
  if(lista== NULL){
    return NULL;
  }
  struct Lista *aux = lista->siguiente;
  free (lista);
  lista = aux;
  return lista;
}

void
mostrar_lista (struct Lista *lista)
{
  while (lista != NULL)
    {
      printf ("%d ", (*lista).dato);
      lista = lista->siguiente;
    }
}
