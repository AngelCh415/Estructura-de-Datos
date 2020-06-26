#include "Hash.h"
#include "Lista.h"
struct Tabla *
crear_tabla (int dato)
{
  struct Tabla *Hash = NULL;
  int indice = 0;
  int i = 0;
  Hash = (struct Tabla *) malloc (sizeof (struct Tabla));
  if (Hash == NULL)
    {
      return NULL;
    }
  indice = hasheo (dato);
  for (i = 0; i < 1000; i++)
    {
      Hash->listas[i] = (struct Lista *) malloc (sizeof (struct Lista));
    }
  Hash->numero_de_elmentos = 0;
  Hash->numero_de_colisiones = 0;
  Hash->listas[indice]->dato = dato;
  return Hash;

}

int
hasheo (int dato)
{
  int indice = 0;
  indice = dato % 1000;
  return indice;
}

void
mostrar_tabla (struct Tabla *Hash)
{
  int i = 0;
  struct Lista *aux = NULL;
  for (i = 0; i < 1000; i++)
    {
      aux = Hash->listas[i];
      if (aux->dato != 0)
	{
	  mostrar_lista (aux);
	  printf ("\n");
	}
    }
}

struct Tabla *
insertar_tabla (struct Tabla *Hash, int dato)
{
  int indice = 0;
  struct Lista *aux = 0;
  indice = hasheo (dato);
  if (Hash->listas[indice]->dato != 0)
    {
      aux = Hash->listas[indice];
      aux = insertar_lista (aux, dato);
      Hash->listas[indice] = aux;
      Hash->numero_de_colisiones++;
    }
  else
    {
      Hash->listas[indice]->dato = dato;
    }
  Hash->numero_de_elmentos++;
  return Hash;
}

struct Tabla *
eliminacion_tabla (struct Tabla *Hash, int dato)
{
  int indice = 0;
  struct Lista *lista = NULL;
  indice = hasheo (dato);
  lista = Hash->listas[indice];
  lista = eliminar_lista_dato (lista, dato);
  Hash->listas[indice] = lista;
  Hash->numero_de_elmentos--;
  return Hash;
}

int
buscar_tabla (struct Tabla *Hash, int dato)
{
  int indice = 0;
  int res = 0;
  struct Lista *aux = 0;
  indice = hasheo (dato);
  aux = Hash->listas[indice];
  res = buscar_lista (aux, dato);
  return res;
}

/*
  struct Tabla * Insercion (int pos, int dato){
	struct Lista *lista[1000];
	struct Tabla *nueva = crear();
	nueva->[lista[pos]] = dato;
}
struct Tabla *  insertar (struct Tabla *tabla,  int dato){
	int indice = hasheo(dato);

	struct Tabla *aux= crear ();
        if(aux==NULL){
		return NULL;
	}
	aux->listas[indice] = dato;
	printf("%d", aux->listas[indice]);
        return tabla;

}
void buscar (struct Tabla *tabla, int dato){
        int indice = hasheo(dato);
	if(tabla->listas[indice] == NULL) printf ("No se encontro");
	else{
		printf("Dato encontrado");
	}
}
*/
