


// Las variables sólo pueden ser char o int, es decir, caracteres o enteros.

// Sirve mucho para trabajar intervalos []

#include <stdio.h>
int main() {
  int numero;

  printf("Escriba un nro del 1 al 3: ");
  scanf("%i",&numero);

  switch (numero) {
    case 1: printf("Es el numero 1");break;
    case 2: printf("Es el numero 2");break;
    case 3: printf("Es el numero 3");break;
    default: printf("El número está fuera de rango");
  }


  return 0;
}
