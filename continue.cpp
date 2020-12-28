// En un ciclo cuando se encuentra la palabra "continue" se salta de manera 
// inmediata a la cabecera del ciclo.

#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i == 5) {
            i += 1;
            continue; // No me interesa lo que hay debajo de mí
        }
        printf("%d ", i);
        i += 1;
    }
}