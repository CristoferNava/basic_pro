// Un número par es divisible entre 2
// Un número impar es aquel que no es par

// 12 / 2 = 6 es par
// 11 / 2 = 5.5 no es par

#include <stdio.h>

int main() {
    int a = 9;

    // Condicionales: Sirven para tomar decisiones
    if (a % 2 == 0) { // el número es par
        // printf("El número es par\n");
    }

    // el if es una pregunta: es cierto o es falso
    // 0 significa falso y todo lo demás es cierto
    // todas las comparaciones devuelven true(1) o false(0)

    // 8 % 2 == 4 y sobra 0 true
    // 9 % 2 == 4 y sobra 1 false
    if (a % 2 == 0) { // todo lo que no cumpla esta condición es impar
        printf("Es par\n");
    } else {
        printf("Es impar\n");
    }

    return 0;
}