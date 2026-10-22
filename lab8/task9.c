#include <stdio.h>
int sum(const int *s, int n) {
    int i, t = 0;
    for (i = 0; i < n; i++) {
        t += *(s + i);
    }
    return t;
}
int big(const int *c, int n) {
    int i, m = 0;
    for (i = 1; i < n; i++) {
        if (*(c + i) > *(c + m)) {
            m = i;
        }
    }
    return m;
}
int main() {
    int a[] = {101, 102, 103};
    int b[] = {201, 202};
    int c[] = {301, 302, 303, 304};
    int *p[] = {a, b, c};
    int n[] = {3, 2, 4};
    int i, t;
    for (i = 0; i < 3; i++) {
        t = sum(p[i], n[i]);
        printf("Shelf %d ID total: %d\n", i + 1, t);
    }
    int x = big(n, 3);
    printf("Shelf with the most books: Shelf %d(%d) books\n", x + 1, n[x]);
    return 0;
}