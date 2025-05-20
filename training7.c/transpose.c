#include <stdio.h>

int main() {
    int matrix[2][3];          // Original 2x3 matrix
    int transpose[3][2];       // Transposed 3x2 matrix
    int i, j;

    // Input values for the 2x3 matrix
    printf("Enter elements of the 2x3 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transposing the matrix
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Displaying the original matrix
    printf("\nOriginal 2x3 Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Displaying the transposed matrix
    printf("\nTransposed 3x2 Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
