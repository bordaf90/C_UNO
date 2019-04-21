

// "While" es nuestro "Mientras".
// El intervalo no es acotado.

// La inicialización va AFUERA del bucle (n=5), pero la condición y el incremento
// van ADENTRO del bucle.



// Ej: Mostrar los primeros 5 números.

#include <stdio.h>

int main() {

    int n=5;            // INICIALIZACION: Declaro la variable n.
    while (n<=10) {     // CONDICION: n es mayor o igual que 10? NO. Entonces, calculo n+1.
      printf("%i\n",n);
      n= n+1;           // INCREMENTO.
    }

 return 0;
}
