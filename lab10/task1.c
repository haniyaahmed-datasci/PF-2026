#include <stdio.h>
#include <string.h>
struct Flight {
    int no;
    char dep[30];
    char arrival[30];
    char date[15];
    int seats;
};

void show(struct Flight f) {
    printf("No: %d\n", f.no);
    printf("Departure: %s\n", f.dep);
    printf("Arrival: %s\n", f.arrival);
    printf("Date: %s\n", f.date);
    printf("Seats: %d\n", f.seats);
}
struct Flight book(struct Flight f) {
    if (f.seats > 0) {
        f.seats=f.seats-1;
        printf("Booked. Left: %d\n", f.seats);
    } else {
        printf("Full\n");
    }
    return f;
}
int main() {
    struct Flight f = {101, "Karachi", "Dubai", "2026-12-15", 5};
    int c;
    do {
     printf("1. Display Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        if (c == 1) {
            show(f);
        } else if (c == 2) {
            f = book(f);
        } else if (c == 3) {
            printf("Exiting program.");
        } else {
            printf("Invalid");
        }
    } while (c != 3);
    return 0;
}