#include "Arbol.h"


int
main (void)
{
  struct Arbol *arbol = NULL;
  arbol = insertar_Arbol (arbol, 10);
  arbol = insertar_Arbol (arbol, 100);
  arbol = insertar_Arbol (arbol, 15);
  arbol = insertar_Arbol (arbol, 150);
  return 0;
}
