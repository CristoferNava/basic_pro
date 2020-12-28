// Cuando en un ciclo se encuentra la palabra break, el ciclo termina de manera
// forzada.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1; // conteo de los números pares
    while (i <= n) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
        i += 1;
    }

    // i = i + 1 --> i += 1 -> i += 5
}