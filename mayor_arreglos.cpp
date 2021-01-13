// 1) Pedir la cantidad de enteros a introducir
// 2) Crear un arreglo con esa cantidad de memoria
// 3) Pedimos los enteros de uno por uno y los vamos guardando en el arreglo
// 4) Asumimos que el primer entero del arreglo es el mayor
// 5) Revisamos el resto de los elementos del arreglo y si encontramos alguno
// más grande que mayor cambiamos el valor de mayor

#include <stdio.h>

int main() {
    // 1)
    printf("Cantidad de enteros a introducir: ");
    int n; // 5
    scanf("%d", &n);

    // 2)
    int numbers[n]; // [0, 0, 0, 0, 0]

    // 3)
    for (int i = 0; i < n; ++i) { // [12, 1, 23, 4, 5]
        printf("Introduce el entero: ");
        scanf("%d", &numbers[i]);
    }

    // 4)
    int greater = numbers[0]; // greater = 12

    // 5
    for (int i = 1; i < n; ++i) { // [1, 23, 4, 5]]
        if (numbers[i] > greater) greater = numbers[i];
    } // greater = 23


    printf("El mayor es: %d\n", greater); // el mayor es 23 y fue el número 3 en ser introducido
}