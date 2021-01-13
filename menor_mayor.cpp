// Pedirle al usuario la cantidad de números que va a introducir (al menos debe introducir 1)
// vamos a asumir que el primer número introducido es el menor y el mayor
// Seguimos pidiendo números y comparamos si el nuevo número introducido es mayor o menor que los que ya están
#include <stdio.h>

int main() {
    printf("Introduzca la cantidad de números que va a ingresar: ");
    int quantity;
    scanf("%d", &quantity);

    int lowest, greatest;
    for (int i = 1; i <= quantity; ++i) {
        printf("Introduzca el entero %d: ", i);
        int num;
        scanf("%d", &num);

        if (i == 1) { // Primer entero introducido
            lowest = num;
            greatest = num;
            continue;
        }
        
        if (num > greatest) greatest = num;
        else if (num < lowest) lowest = num;
    }

    printf("Menor: %d\n", lowest);
    printf("Mayor: %d\n", greatest);
}