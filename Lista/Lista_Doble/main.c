#include "ListaD.h"

int
main (void)
{
  struct ListaD *lista = NULL;
  struct ListaD *aux = NULL;
  struct ListaD *ultimo = NULL;
  int dato = 0;
  lista = crear_lista_doble (13);
  aux = lista;
  printf ("Insertando al inicio (13,12,9,2,5,8)\n");
  lista = insertar_en_doble (lista, 12);
  lista = insertar_en_doble (lista, 9);
  lista = insertar_en_doble (lista, 2);
  lista = insertar_en_doble (lista, 5);
  lista = insertar_en_doble (lista, 8);

  mostrar (lista);
  printf ("Lista al reves\n");
  mostrar_re (aux);
  printf ("\n Ingrese el dato a buscar: \n");
  scanf ("%d", &dato);
  if (buscar_doble (lista, dato) == 1)
    {
      printf ("Se encontro el dato\n");
    }
  else
    {
      printf ("No se encontro el dato\n");
    }
  lista = eliminar_en_doble_inicio (lista);
  printf ("Con eliminacion del inicio ");
  printf ("\n");
  mostrar (lista);
  printf ("Lista al reves\n");
  mostrar_re (aux);
  printf ("\n Eliminando el 9");
  lista = eliminar_en_doble_dato (lista, 9);
  printf ("\n");
  mostrar (lista);
  printf ("\n");
  mostrar_re (aux);
  printf ("\n Eliminando al final\n");
  ultimo = buscar_ultimo_doble (lista);
  lista = eliminar_en_doble_dato (lista, ultimo->dato);
  aux = lista;
  printf ("Mostrando lista\n");
  mostrar (lista);
  return 0;
}
