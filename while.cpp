// Un ciclo, bucle, loop, repetición
// Se ejecuta siempre y cuando la condición de salida se verdadera

#include <stdio.h>

int main() {
    // 1 es verdadero
    // 0 es falso
    int i = 5 > 2; // i vale 1 porque es cierto
    int j = 7 == 4; // j vale 0 porque es falso
    
    while (0) {
        printf("No me repito");
    }

    // Control de condición
    int c = 1;

    while (c) {
        printf("Entré al ciclo");
        c = 0; // Para salir del ciclo
    }

    printf("\n");
}