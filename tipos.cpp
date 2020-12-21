#include <stdio.h>

int main() {
    // Tipos de datos
    // int: Sirve para guardar números enteros (positivios como negativos) %d, %i
    // float: Sirve para guardar números con punto decimal (positivos negativos) %f
    // char: Sirve para guardar un caracter 'c'
    // unsigned int: Enteros sólo positivos

    // Cálculadora
    int n1 = 5;
    int n2 = 2;

    int suma, resta, multiplicacion; // declaración
    float division;

    suma = n1 + n2; // inicializando
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    // 5.0 / 2 -> 2.5
    // n1 / (float)n2 -> 5 / 2.0 -> 2.5
    // (float)n1 / float(n2) -> 5.0 / 2.0 -> 2.5
    division = (float)n1 / n2; // 2.5  int/int->int    float/int=float/float -> float

    printf("Suma: %d \n", suma); // %d para cuando son enteros
    printf("Resta: %d \n", resta);
    printf("Producto: %d \n", multiplicacion);
    printf("Division: %.1f \n", division); // 2.5
    // Suma: 12 algo -2
}