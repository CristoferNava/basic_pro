#include <stdio.h>

int main() {
    for (int row = 1, num = 1; row <= 3; ++row) {
        for (int col = 1; col <= 3; ++col, ++num) {
            printf("%d ", num);
        }
        printf("\n");
    }
}