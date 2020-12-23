#include <stdio.h> // Directivas de preprocesador

int main() { // Entry point de nuestro programa
    // Conversiones de tipo 
    // cuando cambiamos el tipo de alguno de los dos se llama conversión
    // cast, casteo, promoción de tipos

    // Conversión explícita
    float explicita = (float)2;  // 2 es un entero -> 3.0000000
    // printf("%.0f\n", explicita); // por defecto muestra 6 decimales
    

    // se puede perder información:
    float pi = 3.1416;
    int piInt = (int)pi; // 3
    printf("%d\n", piInt);
    printf("%.4f\n", pi); // en las conversiciones se trabajan con copias no con sus valores originales

    // converciones implícitas
    float implicito = 4;
    printf("%f", implicito);

    //
    float a = 5;
    int d = 2;

    // float c = (float)a / d;
    float c;
    c = a / d;

    printf("\n");
    return 0;
}

// int -> 4 bytes

// [b, b, a, a, a, a, b, b, b, d, d, d, d, b, b , b, c, c, c, c]