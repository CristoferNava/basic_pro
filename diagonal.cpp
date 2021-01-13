//      1 2 3
//      ----- 
// 1   |1 2 3| 
// 2   |4 5 6|
// 3   |7 8 9|
//      -----

// 1 -> (1, 1)
// 5 -> (2, 2)
// 9 -> (3, 3)
// la diagonal de una matriz son los elementos tales que el número de fila es igual al número de columna

#include <stdio.h>

int main() {
    for (int row = 1, num = 1; row <= 3; ++row) {
        for (int col = 1; col <= 3; ++col, ++num) {
            if (row == col) printf("%d ", num);
        }
    }
}