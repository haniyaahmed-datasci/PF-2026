#include <stdio.h>
int deposit(float *b, float a) {
    if (a <= 0) {
        return 0;
    }
    *b += a;
    return 1;
}
int withdraw(float *b, float a) {
    if (a <= 0 || a > *b) {
           return 0;
    }
    *b -= a;
    return 1;
}
int main() {
    float b = 1000.0;
    int c;
    float a;
    while (1) {
        printf("Choose option (1-4): ");
        scanf("%d", &c);
        if (c == 1) {
            printf("Enter amount: ");
            scanf("%f", &a);
            if (deposit(&b, a)) {
                printf("Amount deposited successfully.\n");
            } else {
                printf("Insufficient funds or invalid amount.\n");
            }
        } else if (c == 2) {
            printf("Enter amount: ");
            scanf("%f", &a);
            if (withdraw(&b, a)) {
                printf("Amount withdrawn successfully.\n");
            } else {
                printf("Insufficient funds or invalid amount.\n");
            }
        } else if (c == 3) {
            printf("Current balance: %.2f\n", b);
        } else if (c == 4) {
            printf("Goodbye.\n");
            break;
        } else {
            printf("Invalid option\n");
        }
    }
    return 0;
}