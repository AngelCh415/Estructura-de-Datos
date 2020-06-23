#include "Cola.h"
#include "Lista.h"

int
main (void)
{
  struct Cola *cola = NULL;
  printf ("Insertando al inicio los datos 5,10,15,20,25\n");
  cola = push (cola, 5);
  cola = push (cola, 10);
  cola = push (cola, 15);
  cola = push (cola, 20);
  cola = push (cola, 25);
  mostrar_cola (cola);
  cola = pop (cola);
  printf ("\nSegunda impresion despues de eliminar un dato \n");
  mostrar_cola (cola);
  printf ("\n");
  return 0;
}
