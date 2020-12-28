// Que imprima los primeros n números pares
// 2, 4, 6, 8, 10, ... 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1; // lleva el control de la cantidad de números pares

    while (i <= n * 2) {
        if (i % 2 == 0) {
            // Es par
            printf("%d ", i);
        }
        i = i + 1;
    }
}