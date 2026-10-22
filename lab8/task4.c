#include <stdio.h>
float averageSteps(int *p, int n) {
    float s = 0;
    for (int i = 0; i < n; i++) {
        s += *(p + i);
    }
    return s / n;
}
int countGoalDays(int *p, int n, int goal) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (*(p + i) >= goal) {
            c++;
        }
    }
    return c;
}
int main() {
    int a[7];
    for (int i = 0; i < 7; i++) {
        printf("Enter steps for day %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    float avg = averageSteps(a, 7);
    int days = countGoalDays(a, 7, 8000);
    printf("Average steps: %.2f\n", avg);
    printf("Days goal reached (8000 or more): %d\n", days);
    return 0;
}