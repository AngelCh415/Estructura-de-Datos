#include "ListaCD.h"

int
main (void)
{
  struct ListaCD *lista = NULL;
  int dato = 0;
  lista = insertar_en_dc (lista, 5);
  lista = insertar_en_dc (lista, 10);
  lista = insertar_en_dc (lista, 15);
  lista = insertar_en_dc (lista, 20);
  lista = insertar_en_dc (lista, 25);
  lista = insertar_en_dc (lista, 30);
  lista = insertar_en_dc (lista, 35);
  printf ("Mostrando la lista \n");
  mostrar_dc (lista);
  printf ("Mostrando lista invertida\n");
  mostrar_re_dc (lista);
  printf ("\n");
  printf ("Ingrese el dato a buscar \n");
  scanf ("%d", &dato);
  if (buscar_en_dc (lista, dato) == 1)
    {
      printf ("Dato encontrado\n");
    }
  else
    {
      printf ("No existe el dato\n");
    }
  printf ("Eliminando el dato 20\n");
  lista = eliminar_dato_dc (lista, 20);
  mostrar_dc (lista);
  printf ("\nEliminando al inicio\n");
  lista = eliminar_ini_dc (lista);
  mostrar_dc (lista);
  printf ("\nEliminando al final\n");
  lista = eliminar_fin_dc (lista);
  mostrar_dc (lista);
  return 0;
}
