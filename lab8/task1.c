#include <stdio.h>
void bubbleSort(int *p, int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                t = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = t;
            }
        }
    }
}

void printArray(const int *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main() {
    int n;
    while (1) {
        printf("Enter number of scores: ");
        scanf("%d", &n);
        if (n >= 1 && n <= 20) {
            break;
        }
        printf("Invalid size\n");
    }

    int a[20];
    printf("Enter scores: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Before sorting: ");
    printArray(a, n);
    bubbleSort(a, n);
    printf("After sorting: ");
    printArray(a, n);

    return 0;
}