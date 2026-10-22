#include <stdio.h>
int countNeighbours(int (*g)[5], int r, int c) {
    int cnt = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue;
            int nr = r + i;
            int nc = c + j;
            if (nr >= 0 && nr < 5 && nc >= 0 && nc < 5) {
                cnt += (g[nr][nc] & 1);
            }
        }
    }
    return cnt;
}
void nextGeneration(int (*g)[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int cur = g[i][j] & 1;
            int cnt = countNeighbours(g, i, j);
            int n = 0;
            if (cur == 1) {
                if (cnt == 2 || cnt == 3) {
                    n = 1;
                }
            } else {
                if (cnt == 3) {
                    n = 1;
                }
            }
            g[i][j] = cur | (n << 1);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            g[i][j] >>= 1;
        }
    }
}

void printGrid(int (*g)[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", g[i][j] & 1);
        }
        printf("\n");
    }
}

int main() {
    int gen;
    while (1) {
        printf("Enter number of generations (0-50): ");
        scanf("%d", &gen);
        if (gen >= 0 && gen <= 50) {
            break;
        }
        printf("Invalid number\n");
    }

    int g[5][5] = {0};
    g[1][2] = 1;
    g[2][2] = 1;
    g[3][2] = 1;

    printf("Generation 0:\n");
    printGrid(g);

    for (int i = 1; i <= gen; i++) {
        nextGeneration(g);
        printf("Generation %d:\n", i);
        printGrid(g);
    }

    return 0;
}