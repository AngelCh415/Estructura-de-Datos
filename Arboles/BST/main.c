#include "Arbol.h"


int
main (void)
{
  struct Arbol *arbol = NULL;
  arbol = insertar_Arbol (arbol, 10);
  arbol = insertar_Arbol (arbol, 100);
  arbol = insertar_Arbol (arbol, 15);
  arbol = insertar_Arbol (arbol, 150);
  printf ("Impresion normal: \n");
  mostrar_1 (arbol);
  printf ("\n");
  printf ("Impresion ordenada (menor a mayor): \n");
  mostrar_2 (arbol);
  printf ("\n");
  printf ("Impresion ordenada (mayor a menor): \n");
  mostrar_3 (arbol);
  return 0;
}
