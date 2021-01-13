// Algorithm -> Secuencia lógica para resolver el problema
// Data Structures -> Almacenan los datos necesarios para el programa
// Dependiendo lo que queramos guardar tenemos estructuras especializadas

// Queremos guardar 8 números enteros
// 23, 44, 55, 21, 12, 84, 95, 100
// Los arreglos son una estructura de datos lineal indexada los cuales están
// de forma consecutiva en memoria.
// Traverse
// [[int, int, int, int, int, int, int, int]                        ]
// [23, 44, 55, 21, 12, 84, 95, 100]
//  0    1   2   3   4  5   6    7

// [23, 44, 55, 21, 12, 84, 95, 0]
//  0    1   2   3   4   5   6   7 

#include <stdio.h>

int main() {
    int numbers[8] = {23, 44, 55, 21, 12, 84, 95};
    // Cómo accedemos a cada uno de esos valores
    // operador subscript [] acceder al elemento de un arreglo
    // printf("%d", numbers[7]);

    // Traverse o recorrer el arreglo
    for (int i = 0; i <= 7; ++i) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}