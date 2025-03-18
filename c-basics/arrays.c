#include <stdio.h>

#define COL 3  // Use #define for a compile-time constant

int main() {
    int row = 3;

    int matrix[][COL] = {  // Now col is a compile-time constant
        {1, 2, 3},  // Added missing 4th element
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
