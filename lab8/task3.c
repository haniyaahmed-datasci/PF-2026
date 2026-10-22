#include <stdio.h>
int isValidMark(int m) {
    if (m >= 0 && m <= 100) {
        return 1;
    }
    return 0;
}
void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *arr;
    *max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
    }
}
int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        while (1) {
            printf("Enter mark %d: ", i + 1);
            scanf("%d", &a[i]);
            if (isValidMark(a[i])) {
                break;
            }
            printf("Invalid mark, enter again\n");
        }
    }
    int min, max;
    findMinMax(a, 5, &min, &max);
    printf("Lowest mark: %d\n", min);
    printf("Highest mark: %d\n", max);
    
    return 0;
}