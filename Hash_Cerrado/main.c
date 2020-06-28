#include "HashC.h"

int
main (void)
{
  struct Hash *tabla = NULL;
  int eficiencia = 0;
  tabla = crear_tabla (1);
  tabla = insertar (tabla, 5);
  tabla = insertar (tabla, 10);
  tabla = insertar (tabla, 20);
  tabla = insertar (tabla, 25);
  tabla = insertar (tabla, 30);
  tabla = insertar (tabla, 30);
  eficiencia = tabla->colisiones * 100;
  eficiencia = eficiencia / tabla->datos_totales;
  printf ("Mostrando la tabla hash\n");
  mostrar (tabla);
  printf ("Mostrando eficienia del Hasheo %d \n", 100 - eficiencia);
  printf ("Eliminando el 30\n");
  tabla = eliminar (tabla, 30);
  mostrar (tabla);
  printf ("Buscando el elemento 10\n");
  if (buscar (tabla, 10) == 1)
    {
      printf ("Elemento encontrado\n");
    }
  else
    {
      printf ("No existe el elemento\n");
    }
  mostrar (tabla);
  return 0;
}
