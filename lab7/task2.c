#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int mat[5][5];

    printf("Enter number of rows (up to 5): ");
    scanf("%d", &rows);
    printf("Enter number of columns (up to 5): ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if(rows == 1) {
        printf("It is a Row Matrix.\n");
    }
    
    if(cols == 1) {
        printf("It is a Column Matrix.\n");
    }

    if(rows != cols) {
        printf("It is a Rectangular Matrix.\n");
    }

    int isZero = 1;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(mat[i][j] != 0) {
                isZero = 0;
            }
        }
    }
    if(isZero) {
        printf("It is a Zero Matrix (Null Matrix).\n");
    }

    if(rows == cols) {
        printf("It is a Square Matrix.\n");

        int isUpper = 1;
        for(i = 1; i < rows; i++) {
            for(j = 0; j < i; j++) {
                if(mat[i][j] != 0) {
                    isUpper = 0;
                }
            }
        }
        if(isUpper) {
            printf("It is an Upper Triangular Matrix.\n");
        }

        int isLower = 1;
        for(i = 0; i < rows; i++) {
            for(j = i + 1; j < cols; j++) {
                if(mat[i][j] != 0) {
                    isLower = 0;
                }
            }
        }
        if(isLower) {
            printf("It is a Lower Triangular Matrix.\n");
        }

        int isDiagonal = 1;
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                if(i != j && mat[i][j] != 0) {
                    isDiagonal = 0;
                }
            }
        }
        if(isDiagonal) {
            printf("It is a Diagonal Matrix.\n");
        }

        int isScalar = 1;
        if(isDiagonal) {
            int firstDiag = mat[0][0];
            for(i = 1; i < rows; i++) {
                if(mat[i][i] != firstDiag) {
                    isScalar = 0;
                }
            }
            if(isScalar) {
                printf("It is a Scalar Matrix.\n");
            }
        }

        int isIdentity = 1;
        if(isDiagonal) {
            for(i = 0; i < rows; i++) {
                if(mat[i][i] != 1) {
                    isIdentity = 0;
                }
            }
            if(isIdentity) {
                printf("It is an Identity Matrix.\n");
            }
        }

        int isSymmetric = 1;
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                if(mat[i][j] != mat[j][i]) {
                    isSymmetric = 0;
                }
            }
        }
        if(isSymmetric) {
            printf("It is a Symmetric Matrix.\n");
        }

        int isSkewSymmetric = 1;
        for(i = 0; i < rows; i++) {
            if(mat[i][i] != 0) {
                isSkewSymmetric = 0;
            }
            for(j = 0; j < cols; j++) {
                if(mat[i][j] != -mat[j][i]) {
                    isSkewSymmetric = 0;
                }
            }
        }
        if(isSkewSymmetric) {
            printf("It is a Skew-Symmetric Matrix.\n");
        }
    }

    return 0;
}