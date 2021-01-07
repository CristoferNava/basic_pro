// Los ciclos anidados son cuando un ciclo se encuentra dentro de otro.
// Siempre se va de adentro hacia afuera, es decir, tiene que terminar primero
// el ciclo que se encuentra más anidado.
#include <stdio.h>

int main() {
    int mesero = 1;

    while (mesero <= 3) {           // 1 -> 2
        printf("Fui una vez\n");    // 6
        
        int cocinero = 1;
        while (cocinero <= 2) {
            printf("Preparé un pastel\n");
            cocinero += 1;
        }
        
        mesero += 1;
    }
    printf("\n");

    
}

while 
    while 
        while 
            while 