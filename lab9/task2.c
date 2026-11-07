#include <stdio.h>
int main() {
    char first[50];
    char last[50];
    char full[100];
    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);
    int i = 0;
    int j = 0;
    while (first[i] != '\0') {
        full[i] = first[i];
        i++;
    }
    full[i] = ' ';
    i++;
    while (last[j] != '\0') {
        full[i] = last[j];
        i++;
        j++;
    }
    full[i] = '\0';
    printf("Full name: %s\n", full);
    return 0;
}