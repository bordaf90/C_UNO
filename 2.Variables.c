


#include <stdio.h>

int p=3; // Variable global: sirve para todo el programa.

int main (){   // Función main.
  int x=10; // Variable local: sirve sólo dentro de la función.
  float y=3.56;

  int suma=x+y+p;
  float mult=x*y*p;


  printf("La suma es %i\n",suma); // Lleva "%i" por ser int
  printf("La multiplicación es %.7f\n",mult ); // Lleva "%f" por ser float
                                               // El "%.7f" indica que hay 7 decimales
}
