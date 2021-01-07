#include <stdio.h>

int main() {
    for (int i = 1; i <=5; ++i) {
        char simbolo;
        if (i % 2 == 0) simbolo = '*';
        else simbolo = '#';

        for (int j = 1; j <= 5; ++j)
            printf("%c ", simbolo); 

        printf("\n");
    }
}