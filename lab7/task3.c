#include <stdio.h>

int main() {
    int r1 = 2, c1 = 3;
    int r2 = 3, c2 = 2;
    
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int mat2[3][3] = {
        {7, 8},
        {9, 1},
        {2, 3}
    };
    
    int result[3][3];
    int i, j, k;

    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first matrix must match rows of second matrix.\n");
        return 0;
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("First Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix after Multiplication:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}