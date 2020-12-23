#include <stdio.h>
#define true 1
#define false 0

// Dados 2 números decir si son iguales, o uno es menor que otro
// 7 y 4
// 1-2-3-4-5-6-7-8

int main() {
    // Introducir datos por terminal
    
    int n1;
    int n2;

    printf("Introduzca el primer entero: ");
    scanf("%d", &n1);
    printf("Introduzca el segundo entero: ");
    scanf("%d", &n2);

    // n1=3, n2=4
    /*
    if (n1 == n2) {
        printf("Ambos enteros son iguales");
    } else {
        if (n1 > n2) {
            printf("El primer entero es mayor que el segundo");
        } else {
            printf("El segundo es mayor que el primero");
        }
    }
    */
    if (n1 == n2) printf("Ambos enteros son iguales");
    else 
        if (n1 > n2) printf("El primero es mayor que el segundo");
        else printf("El segundo es mayor que el primero");
    

    




















    // Cuando el bloque es de una sóla línea se puede omitir las llaves
    printf("\n");
    // if (5 < 2) 
    //     printf("Es cierto\n"); 
    // else 
    //     printf("Es falso");



    printf("Terminó el if");



    
    
    
    // printf("\n%d %d\n", n1, n2);
    return 0;
}