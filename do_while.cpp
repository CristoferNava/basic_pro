// En el ciclo Do While primero se ejecuta el cuerpo y después se revisa la condición
#include <stdio.h>

int main() {
    // Imprimir los números del 1 al 10
    int i = 1;
    do {
        printf("%d ", i);
        i += 1;
    } while (i <= 10);

    do {
        printf("ES falso");
    } while (0);
}