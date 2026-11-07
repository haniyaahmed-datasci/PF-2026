#include <stdio.h>
#include <string.h>
int main() {
    char cities[5][50];
    char longest[50];
    int maxLen= 0;
    printf("enter 5 city names:\n");
    for (int i = 0; i < 5; i++) {
        fgets(cities[i], 50, stdin);
        int j = 0;
        while (cities[i][j] != '\0') {
            if (cities[i][j] == '\n') {
                cities[i][j] = '\0';
            }
            j++;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%s\n", cities[i]);
    }
    maxLen = strlen(cities[0]);
    strcpy(longest, cities[0]);
    for (int i = 1; i < 5; i++) {
        int len = strlen(cities[i]);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, cities[i]);
        }
    }
    printf("\nLongest city name: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}
