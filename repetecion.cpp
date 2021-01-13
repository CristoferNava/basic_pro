// Le va a pedir al usuario que introduzca una cantidad n de enteros
// después le va a pedir entero por entero, y al final le va a mostrar todos
// los enteros que introdujo
// 5 -> 3 12 21 44 122
// 3 12 21 44 122
#include <stdio.h>

int main() {
    printf("Cuántos enteros quieres introducir: ");
    int n;
    scanf("%d", &n);

    int numbers[n]; // [0, 0, 0, ..., 0]

    // Pedirle que introduzca sus n enteros
    for (int i = 0; i < n; ++i) {
        printf("Introduce el entero: ");
        scanf("%d", &numbers[i]);
    }

    // Imprimir los enteros que introdujo
    printf("\nLos enteros que introdujo son: \n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}