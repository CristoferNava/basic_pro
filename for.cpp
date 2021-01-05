// Todos los ciclos revisan una condición
#include <stdio.h>

using namespace std;

int main() {
    // for (;0;) {
    //     printf("Esto es cierto");
    // }
   
   // imprimir los números del 1 al 10
   /*
   int i = 1; // Inicializar variables
   while (i <= 10) { // Revisar condición
        // hacer cosas
       printf("%d ", i);
       i += 1;
   }*/
    
    // for (inicializar variables (opcional); condición; cuerpo del código (opcional) se ejecuta hasta el final)
    /*
    for (int i = 1; i <= 10; printf("%d ", i),  i += 1) {
    }
    */

   
//    for (int i = 1; i <= 10; i += 1) {
//        printf("%d ", i);
//    }
    
    int i = 1;
    while (i <= 10) {
        if (i == 5) { // i = 5
            i += 1;
            continue;
        }
        printf("%d ", i);
        i += 1;
    }

    printf("\n");

    for (int i = 1; i <= 10; i+=1) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    } 
}