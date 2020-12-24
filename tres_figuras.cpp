#include <stdio.h>

int main() {
    printf("Selecciona la figura a la cual quiere obtener su área: \n");
    printf("1: Para el círculo. 2: Para el cuadrado. 3: Para el triángulo: ");
    int option;
    scanf("%d", &option);

    if (option == 1) {
        float pi = 3.1416;
        printf("Introduzca el radio del círculo: ");
        float ratio;
        scanf("%f", &ratio);

        float area = pi * ratio * ratio;
        printf("El área es: %.2f", area);
    } else if (option == 2) {
        printf("Introduzca el largo de un lado: ");
        float side;
        scanf("%f", &side);

        float area = side * side;
        printf("El área es: %.2f", area);
    } else if (option == 3) {
        printf("Introduzca la base del triángulo: ");
        float base;
        scanf("%f", &base);
        printf("Introduzca la altura: ");
        float height;
        scanf("%f", &height);

        float area = base * height / 2;
        printf("El área es: %.2f", area);
    } else {
        printf("Opción no válida");
    }
    return 0;
}