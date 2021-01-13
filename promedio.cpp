// Saber el número de calificaciones
// Pedir las calificaciones de una por una y sumarlas a un total
// Dividir la suma de todas la calificaciones entre el número de calificaciones introducidas

#include <stdio.h>

int main() {
    int num;
    printf("Introduzca el número de calificaciones: ");
    scanf("%d", &num);

    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        printf("Introduzca la calificación número %d: ", i);
        int cal;
        scanf("%d", &cal);
        sum += cal;
    }
    float avg = (float)sum / num;
    printf("El promedio es: %.2f", avg);


    printf("\n");
}