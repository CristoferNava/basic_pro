// 1+2+3+4+5+...+100 n = 100
// n = 10    1+2+3+4+5+6+7+8+9+10 = 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = 1; // toma todos los enteros desde 1 hasta n

    do {
        sum += i;
        i += 1;
    } while (i <= n);

    printf("%d\n", sum);
}