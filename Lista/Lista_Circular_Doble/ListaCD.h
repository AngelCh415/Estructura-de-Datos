#ifndef __LISTACD_H__
#define __LISTACD_H__

#include<stdlib.h>
#include<stdio.h>

struct ListaCD
{
  int dato;
  struct ListaCD *siguiente;
  struct ListaCD *anterior;

};
struct ListaCD *insertar_en_dc (struct ListaCD *, int);
struct ListaCD *crear_lista_dc (int);
struct ListaCD *buscar_ultimo (struct ListaCD *);
struct ListaCD *eliminar_dato_dc (struct ListaCD *, int);
struct ListaCD *eliminar_ini_dc (struct ListaCD *);
struct ListaCD *eliminar_fin_dc (struct ListaCD *);
void mostrar_dc (struct ListaCD *);
void mostrar_re_dc (struct ListaCD *);
int buscar_en_dc (struct ListaCD *, int);


#endif
