// Quiero imprimir los primeros 10 enteros
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

#include <stdio.h>

int main() {
    int i = 1; // Contador

    while (i <= 10) {
        printf("%d ", i);
        i = i + 1;
    }
}