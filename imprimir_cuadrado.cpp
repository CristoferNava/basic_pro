/*
# # # # # 
# # # # #
# # # # #
# # # # #
# # # # #
*/
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i += 1) {
        // Por cada renglón quiero que me imprimas 6 gatos
        for (int j = 1; j <= 6; j += 1) {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");
}