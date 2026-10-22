#include <stdio.h>
void swapValues(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
int main() {
    int a, b;
    printf("Enter price A: ");
    scanf("%d", &a);
    printf("Enter price B: ");
    scanf("%d", &b);
    printf("Before swap: A = %d, B = %d\n", a, b);
    swapValues(&a, &b);
    printf("After swap: A = %d, B = %d\n", a, b);
    return 0;
}