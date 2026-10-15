#include <stdio.h>
int main() {
    int arr[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {9, 8, 7},
            {6, 5, 4},
            {3, 2, 1}
        }
    };

    int i, j, k, l, m;

    for(i = 0; i < 3; i++) {
        for(j = i + 1; j < 3; j++) {
            int identical = 1;
            for(k = 0; k < 3; k++) {
                for(l = 0; l < 3; l++) {
                    if(arr[i][k][l] != arr[j][k][l]) {
                        identical = 0;
                    }
                }
            }
            if(identical) {
                printf("Layer %d and Layer %d are identical.\n", i + 1, j + 1);
            } else {
                printf("Layer %d and Layer %d are distinct.\n", i + 1, j + 1);
            }
        }
    }
    return 0;
}