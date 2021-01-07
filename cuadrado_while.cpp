#include <stdio.h>

int main() {
    int i = 1; // Controla el número de filas
    int j = 1; // j Controla el número de columna (por cada columna imprimos un #)

    while (i <= 5) {
        // Controla la fila en la que se encuentra
        j = 1;
        while (j <= 3) {
            // Imprime #s por cada fila
            printf("# ");
            j += 1;
        }
        printf("\n");
        i += 1;
    }
}
# # # # 
* * * * 
# # # # 
* * * *
# # # #