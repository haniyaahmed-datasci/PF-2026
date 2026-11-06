#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100];
    printf("enter a sentence:");
    fgets(sentence, 100, stdin);
    char *p = strchr(sentence, 'a');
    if (p != NULL) {
        long index = p - sentence;
        printf("first 'a' found at index %ld\n", index);
    char *w = strstr(sentence, "good");
    if (w != NULL) {
        printf("Word 'good' found.\n");
    } else {
        printf("Word 'good' not found.\n");
    }
    return 0;
}