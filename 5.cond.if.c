

// Prueba de divisibilidad

#include <stdio.h>
int main() {
    int n1,n2;  // Variables de entrada

    printf("Digite dos números");  // Leer
    scanf("%i %i",&n1,&n2 );       // Escribir

    if (n1 % n2 ==0) {     // el símbolo % representa n1 mod n2
    printf("El número %i es divisible por %i",n1,n2);
    }

    return 0;
}
