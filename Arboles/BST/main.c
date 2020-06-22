#include "Arbol.h"


int
main (void)
{
  struct Arbol *arbol = NULL;
  arbol = insertar_Arbol (arbol, 50);
  arbol = insertar_Arbol (arbol, 100);
  arbol = insertar_Arbol (arbol, 15);
  arbol = insertar_Arbol (arbol, 150);
  printf ("Buscando el 100");
  if (buscar_arbol (arbol, 100) == 1)
    {
      printf ("\nNumero encontrado\n");
    }
  else
    {
      printf ("\nNo existe el numero\n");
    }
  printf ("Impresion normal: \n");
  mostrar_1 (arbol);
  printf ("\n");
  printf ("Impresion ordenada (menor a mayor): \n");
  mostrar_2 (arbol);
  printf ("\n");
  printf ("Impresion ordenada (mayor a menor): \n");
  mostrar_3 (arbol);
  arbol = eliminar_Arbol (arbol, 50);
  printf ("\n");
  printf ("Eliminando 50\n");
  mostrar_2 (arbol);
  return 0;
}
