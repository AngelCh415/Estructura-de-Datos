#include "HashC.h"

struct Hash *
crear_tabla (int dato)
{
  int i = 0;
  int pos = 0;
  struct Hash *hash = NULL;
  hash = (struct Hash *) malloc (sizeof (struct Hash));
  if (hash == NULL)
    {
      return NULL;
    }
  pos = hasheo (dato);
  for (i = 0; i < 1000; i++)
    {
      hash->pos[i] = -1;
    }
  hash->pos[pos] = dato;
  hash->datos_totales = 1;
  hash->colisiones = 0;
  return hash;
}

int
hasheo (int dato)
{
  dato = dato * dato;
  dato++;
  dato = dato % 1000;
  return dato;
}

struct Hash *
insertar (struct Hash *hash, int dato)
{
  int pos = 0;
  int aux;
  pos = hasheo (dato);
  if (hash->pos[pos] != -1)
    {
      aux = hash->pos[pos];
      while (hash->pos[pos] == aux)
	{
	  pos = hasheo (pos);
	  hash->colisiones++;
	}
      hash->pos[pos] = dato;
    }
  else
    {
      hash->pos[pos] = dato;
    }
  hash->datos_totales++;
  return hash;
}

void
mostrar (struct Hash *hash)
{
  int i = 0;
  for (i = 0; i < 1000; i++)
    {
      if (hash->pos[i] != -1)
	{
	  printf ("%d\n", hash->pos[i]);
	}
    }
}

struct Hash *
eliminar (struct Hash *tabla, int dato)
{
  int pos = 0;
  int i = 0;
  pos = hasheo (dato);
  while (tabla->pos[pos] != dato && i < 1000)
    {
      pos = hasheo (dato);
      i++;
    }
  if (i == 1000)
    {
      return tabla;
    }
  tabla->pos[pos] = -1;
  tabla->datos_totales--;
  return tabla;
}

int
buscar (struct Hash *tabla, int dato)
{
  int pos = 0;
  int i = 0;
  pos = hasheo (dato);
  while (tabla->pos[pos] != dato && i < 1000)
    {
      pos = hasheo (dato);
      i++;
    }
  if (i == 1000)
    {
      return 0;
    }
  return 1;
}
