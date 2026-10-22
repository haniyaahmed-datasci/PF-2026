#include <stdio.h>
void printArray(const int *arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", *(arr + i));
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}
void reverseArray(int *arr, int n) {
    int *s = arr;
    int *e = arr + n - 1;
    int t;
    while (s < e) {
        t = *s;
        *s = *e;
        *e = t;
        s++;
        e--;
    }
}
int main() {
    int n, i;
    int a[20];
    while (1) {
        printf("Enter number of songs: ");
        scanf("%d", &n);
        if (n >= 1 && n <= 20) {
            break;
        }
        printf("Invalid size\n");
    }
    printf("Enter song IDs: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original: ");
    printArray(a, n);
    reverseArray(a, n);
    printf("Reversed: ");
    printArray(a, n);
    return 0;
}