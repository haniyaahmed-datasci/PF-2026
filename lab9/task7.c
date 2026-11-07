#include <stdio.h>
int main() {
    FILE *fptr;
    char name[50];
    int count;
    count = 0;
    fptr = fopen("students.txt", "w");
    if (fptr != NULL) {
        printf("Enter 3 student names:\n");
        for (int i = 0; i < 3; i++) {
            scanf("%s", name);
            fprintf(fptr, "%s\n", name);
        }
        fclose(fptr);
    }
    fptr = fopen("students.txt", "r");
    if (fptr != NULL) {
        printf("\nNames read from students.txt:\n");
        while (fscanf(fptr, "%s", name) == 1) {
            count = count + 1;
            printf("%d", count);
            printf(". ");
            printf("%s\n", name);
        }
        printf("Total students in file: ");
        printf("%d\n", count);
        fclose(fptr);
    }
    return 0;
}