#include <stdio.h>
int square(int x) {
    return x * x;
}
int negate(int x) {
    return -x;
}
int isEven(int x) {
    return x % 2 == 0;
}
int isPositive(int x) {
    return x > 0;
}
void applyToArray(int *arr, int n, int (*fn)(int)) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = fn(arr[i]);
    }
}
int countIf(const int *arr, int n, int (*pred)(int)) {
    int i, c = 0;
    for (i = 0; i < n; i++) {
        if (pred(arr[i])) {
            c++;
        }
    }
    return c;
}
void printGeneric(void *data, char type, int n) {
    int i;
    if (type == 'i') {
        int *p = (int *)data;
        for (i = 0; i < n; i++) {
            printf("%d", p[i]);
            if (i < n - 1) printf(" ");
        }
        printf("\n");
    } else if (type == 'f') {
        float *p = (float *)data;
        for (i = 0; i < n; i++) {
            printf("%.2f", p[i]);
            if (i < n - 1) printf(" ");
        }
        printf("\n");
    } else if (type == 'c') {
        char *p = (char *)data;
        for (i = 0; i < n; i++) {
            printf("%c", p[i]);
            if (i < n - 1) printf(" ");
        }
        printf("\n");
    } else {
        printf("Invalid type '%c' for printGeneric\n", type);
    }
}
int main() {
    int n, i;
    int a[50] = {3, -2, 8, -5, 6};
    while (1) {
        printf("Enter n (1-50): ");
        scanf("%d", &n);
        if (n >= 1 && n <= 50) {
            break;
        }
    }
    printf("Original: ");
    printGeneric(a, 'i', n);
    applyToArray(a, n, negate);
    printf("After negate: ");
    printGeneric(a, 'i', n);
    int pos = countIf(a, n, isPositive);
    printf("Positive values after negate: %d\n", pos);
    int evn = countIf(a, n, isEven);
    printf("Even values after negate: %d\n", evn);
    float f[] = {1.50, 2.25};
    printf("Float print (type f): ");
    printGeneric(f, 'f', 2);
    printGeneric(a, 'x', n);
    return 0;
}