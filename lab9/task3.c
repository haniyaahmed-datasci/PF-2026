#include <stdio.h>
#include <string.h>
int main() {
    char secret[] = "lab10abc";
    char guess[100];
    printf("Enter password: ");
    scanf("%s", guess);
    if (strcmp(guess, secret) == 0) {
        printf("access granted\n");
    } else {
        printf("access denied\n");
    }
    if (strncmp(guess, secret, 3) == 0) {
        printf("first 3 characters match\n");
    } else {
        printf("first 3 characters do not match\n");
    }

    return 0;
}