

// Nota del estudiante

#include <stdio.h>
int main() {
    float nota;  // Declaro la variable

    printf("Digite la nota del examen: ");  // Leer
    scanf("%f\n",nota );                    // Escribir

    if (nota>4){                           // Si pasa tal cosa
      puts("El alumno está aprobado ");
    }

    else{                                 // Si no pasa tal cosa
      puts("El alumno está desaprobado");
                                         // Se pone "puts" y no "printf" porque estamos trabajando cadenas
    }

    return 0;
}
