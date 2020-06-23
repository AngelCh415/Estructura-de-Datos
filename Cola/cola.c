#include "Cola.h"
#include "Lista.h"

struct Cola *
crear_cola (int dato)
{
  struct Cola *nueva = NULL;
  nueva = (struct Cola *) malloc (sizeof (struct Cola));
  if (nueva == NULL)
    {
      return NULL;
    }
  nueva->lista = insertar_lista (nueva->lista, dato);
  return nueva;
}

struct Cola *
push (struct Cola *cola, int dato)
{
  if (cola == NULL)
    {
      cola = crear_cola (dato);
    }
  else
    {
      cola->lista = insertar_lista (cola->lista, dato);
    }
  return cola;
}

int
estaVacia (struct Cola *cola)
{
  if (cola != NULL && cola->lista != NULL)
    {
      return 1;
    }
  return 0;
}

int
top (struct Cola *cola)
{
  int dato = 0;
  dato = cola->lista->dato;
  return dato;

}

void
mostrar_cola (struct Cola *cola)
{
  struct Cola *aux = NULL;
  int dato = 0;
  while (cola->lista != NULL)
    {
      dato = top (cola);
      aux = push (aux, dato);
      cola->lista = eliminar_lista_inicio (cola->lista);
    }
  while (aux->lista != NULL)
    {
      dato = top (aux);
      printf ("%d ", dato);
      cola = push (cola, dato);
      aux->lista = eliminar_lista_inicio (aux->lista);
    }
}

struct Cola *
pop (struct Cola *cola)
{
  struct Cola *aux = NULL;
  struct Cola *aux2 = NULL;
  int dato = 0;
  if (cola == NULL)
    {
      return NULL;
    }
  while (cola->lista->siguiente != NULL)
    {
      dato = top (cola);
      aux = push (aux, dato);
      cola->lista = cola->lista->siguiente;
    }
  free (cola);
  cola = aux;
  while (cola->lista->siguiente != NULL)
    {
      dato = top (cola);
      aux2 = push (aux2, dato);
      cola->lista = cola->lista->siguiente;
    }
  dato = top (cola);
  aux2 = push (aux2, dato);
  return aux2;
}
