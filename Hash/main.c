#include "Hash.h"

int
main ()
{
  struct Tabla *tabla;
  int Efectividad = 0;
  tabla = crear_tabla (5);
  tabla = insertar_tabla (tabla, 10);
  tabla = insertar_tabla (tabla, 1005);
  tabla = insertar_tabla (tabla, 2005);
  tabla = insertar_tabla (tabla, 20);
  tabla = insertar_tabla (tabla, 50);
  tabla = insertar_tabla (tabla, 40);
  tabla = insertar_tabla (tabla, 60);
  tabla = insertar_tabla (tabla, 1200);
  tabla = insertar_tabla (tabla, 600);
  mostrar_tabla (tabla);
  Efectividad = tabla->numero_de_colisiones * 100;
  Efectividad /= tabla->numero_de_elmentos;
  printf ("Efectividad del Hasheo: %d por ciento\n", 100 - Efectividad);
  printf ("Eliminacion del dato 1005\n");
  tabla = eliminacion_tabla (tabla, 1005);
  mostrar_tabla (tabla);
  printf ("Buscando dato 60\n");
  if (buscar_tabla (tabla, 60) == 1)
    {
      printf ("Dato encontrado\n");
    }
  else
    {
      printf ("No existe dato\n");
    }
  mostrar_tabla (tabla);
  return 0;
}
