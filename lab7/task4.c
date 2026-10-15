#include <stdio.h>

int main() {
    int arr[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };

    int i, j, k;
    int totalSum = 0;
    int maxVal = arr[0][0][0];
    int minVal = arr[0][0][0];

    for(i = 0; i < 3; i++) {
        int layerSum = 0;
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                int current = arr[i][j][k];
                layerSum += current;
                totalSum += current;
                if(current > maxVal) {
                    maxVal = current;
                }
                if(current < minVal) {
                    minVal = current;
                }
            }
        }
        printf("Layer %d Total: %d\n", i + 1, layerSum);
    }

    printf("\nOverall Data Insights:\n");
    printf("Total Sum of all elements: %d\n", totalSum);
    printf("Maximum value in array: %d\n", maxVal);
    printf("Minimum value in array: %d\n", minVal);

    return 0;
}