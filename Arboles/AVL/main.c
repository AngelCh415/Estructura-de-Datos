#include "ArbolAVL.h"

int
main ()
{
  struct AVL *arbol = NULL;
  arbol = insertar_AVL (arbol, 50);
  arbol = insertar_AVL (arbol, 40);
  arbol = insertar_AVL (arbol, 20);
  arbol = insertar_AVL (arbol, 30);
  arbol = insertar_AVL (arbol, 10);
  arbol = insertar_AVL (arbol, 5);
  printf ("Mostrando arbol en inorden\n");
  mostrar_1 (arbol);
  printf ("\nMostrando arbol de menor a mayor \n");
  mostrar_2 (arbol);
  printf ("\nMostrando arbol de mayor a menor \n");
  mostrar_3 (arbol);
  printf ("\n");
  return 0;
}
