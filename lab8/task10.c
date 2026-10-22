#include <stdio.h>
int add(int a, int b, int *r) {
    *r = a + b;
    return 1;
}
int sub(int a, int b, int *r) {
    *r = a - b;
    return 1;
}
int mul(int a, int b, int *r) {
    *r = a * b;
    return 1;
}
int div(int a, int b, int *r) {
    if (b == 0) {
        return 0;
    }
    *r = a / b;
    return 1;
}
int main() {
    int (*ops[])(int, int, int *) = {add, sub, mul, div};
    int c, a, b, r;
    while (1) {
        printf("Choice (1-5): ");
        scanf("%d", &c);
        if (c == 5) {
            printf("Goodbye.\n");
            break;
        }
        if (c < 1 || c > 5) {
            printf("Invalid choice\n");
            continue;
        }
        printf("Enter a and b: ");
        scanf("%d %d", &a, &b);
        int i = c - 1;
        if (ops[i](a, b, &r)) {
            if (c == 1) {
                printf("Add result: %d\n", r);
            } else if (c == 2) {
                printf("Subtract result: %d\n", r);
            } else if (c == 3) {
                printf("Multiply result: %d\n", r);
            } else if (c == 4) {
                printf("Divide result: %d\n", r);
            }
        } else {
            printf("Error: division by zero\n");
        }
    }
    return 0;
}