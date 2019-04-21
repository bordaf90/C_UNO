


#include <stdio.h>
int main() {
  int a;
  float b;
  char c;

  printf("Digite el valor de la variable a: ");
  scanf("%i",&a);               // %i señalo el tipo de variable, y con & indico cual variable.
  printf("El valor de a es: %i", a );

  char x[50]; // Con esto escribo una cadena de caracteres.
  printf("Escribí tu nombre: ");
  gets(x); // Utilizo gets y NO Scanf porque Scanf sólo me lee hasta el primer espacio.
           // Si escribo "Abraham Borda" solo mostraría "Abraham"
  printf("Su nombre es: %s\n",x);


  return 0;
}
