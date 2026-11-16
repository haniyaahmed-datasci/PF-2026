#include <stdio.h>
#include <string.h>
struct Movie {
    char title[50];
    char genre[30];
    char director[30];
    int year;
    float rating;
};
int main() {
    struct Movie movies[10];
    int count = 0, choice;
    do {
        printf("1.Add\n2.Search\n3.Show\n4.Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Title: ");
            scanf("%s", movies[count].title);
            printf("Genre: ");
            scanf("%s", movies[count].genre);
            printf("Director: ");
            scanf("%s", movies[count].director);
            printf("Year: ");
            scanf("%d", &movies[count].year);
            printf("Rating: ");
            scanf("%f", &movies[count].rating);
            count++;
        } else if (choice == 2) {
            char searchGenre[30];
            printf("Genre: ");
            scanf("%s", searchGenre);
            for (int i = 0; i < count; i++) {
                if (strcmp(movies[i].genre, searchGenre) == 0) {
                    printf("%s\n", movies[i].title);
                }
            }
        } else if (choice == 3) {
            for (int i = 0; i < count; i++) {
                printf("%s %s %s %d %.1f\n", movies[i].title, movies[i].genre, movies[i].director, movies[i].year, movies[i].rating);
            }
        }
    } while (choice != 4);

    return 0;
}