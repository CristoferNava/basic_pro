#include <stdio.h>

int main() {
    // Operadores aritméticos
    int n1 = 5;
    int n2 = 2;

    int sum = n1 + n2;
    int resta = n1 - n2;
    int producto = n1 * n2;
    int division = n1 / n2; // 5 / 2 = 2

    // la división en C es entera (trunca la parte decimal)

    // Operador módulo
    // Residuo de una división: %
    int residuo = 11 % 2;

    printf("%d", residuo);
}