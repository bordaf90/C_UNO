

// El for es nuestro "Para".

// En este caso la Inicialización, Condición e Incremento van ADENTRO del bucle.

// Ej: Mostrar los 10 primeros nros.

#include <stdio.h>

int main(){
    int n;
    for (n= 1; n<= 10; n= n+1) {     // for (Inicialización, Condición, Incremento)
      printf("%i\n", n);
    }

return 0;
}




// Ej 2: Escribir 100 veces, de forma numerada, "No debo llegar tarde a la facu".

#include <stdio.h>

int main(){
    int p;
    for (p= 1; p<= 100; p= p+1) {     // for (Inicialización, Condición, Incremento)
      printf("%i. No debo llegar tarde a la facu \n", p);
    }    // El %i. me va a enumerar, el \n me va a poner uno debajo del otro.

return 0;
}

// Se muestra:

1. No debo llegar tarde a la facu
2. No debo llegar tarde a la facu
3. No debo llegar tarde a la facu
4. No debo llegar tarde a la facu
5. No debo llegar tarde a la facu
6. No debo llegar tarde a la facu
7. No debo llegar tarde a la facu

etc
