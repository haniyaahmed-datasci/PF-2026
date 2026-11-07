#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    char *p = strchr(sentence, 'a');
    if (p != NULL) {
        int index = p - sentence;
        printf("First 'a' found at index %d\n", index);
    } else {
        printf("Letter 'a' not found.\n");
    }
    char *w = strstr(sentence, "good");
    if (w != NULL) {
        printf("Word 'good' found.\n");
    } else {
        printf("Word 'good' not found.\n");
    }
    return 0;
}
