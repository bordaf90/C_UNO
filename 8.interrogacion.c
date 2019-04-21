

// La estructura con "C" sirva para hacer un if o select de manera más corta.

// Decidir si un nro es par o no (parecido al if del .5).

#include <stdio.h>
int main() {
  int numero;

  printf("Escriba un número: ");
  scanf("%i",&numero);

  (numero%2==0) ? printf ("El número es par ") : printf("El número es impar");

  // Por lo gral se usa más para funciones, quedando estructuralmente asi:

  // (numero%2==0) ? funcion 1 () : funcion 2 ();

  // " Si pasa tal cosa ejecuto funcion 1, y sino, ejecuto funcion 2".

  return 0;
}
