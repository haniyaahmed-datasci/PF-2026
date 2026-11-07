#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    char copy[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    int i = 0;
    while (name[i] != '\0') {
        if (name[i] == '\n') {
            name[i] = '\0';
        }
        i++;
    }
    int length = strlen(name);
    printf("Length: %d\n", length);
    strcpy(copy, name);
    printf("Copy: %s\n", copy);
    printf("Sizeof: %d\n", (int)sizeof(name));
    return 0;
}