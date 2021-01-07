#include <stdio.h>

int main() {
    int i = 1;    
    char simbolo;

    while (i <= 5) {
        if (i % 2 == 0) simbolo = '*';
        else simbolo = '#';

        int j = 1;
        while (j <= 3) {
            printf("%c ", simbolo);
            j += 1;
        }
        printf("\n");
        i += 1;
    }
}