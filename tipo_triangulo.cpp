#include <stdio.h>

int main() {
    int l1, l2, l3;
    printf("Introduce los 3 lados del triángulo: ");
    scanf("%d %d %d", &l1, &l2, &l3);
    // and or not  
    // igual: == diferent: != ! =
    // &&  ||  !
    // !=
    if (l1 == l2 && l1 == l3) {
        printf("Es equilatero");
        // 1  2 1
    } else if (l1 != l2 && l2 != l3 && l1 != l3) {
        printf("Es escaleno");
    } else {
        printf("Es isoceles");
    }

    return 0;
}