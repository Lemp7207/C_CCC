#include <stdio.h>

int main() {
    int n = 0;
    int score[5][4] = {0};
    for (int i = 0; i<5; i++) {
        int total = 0;
        float avg = 0.0f;
        for (int j = 0; j<4; j++) {
            scanf("%d", &n);
            score[i][j] = n;
        }

        for (int j = 0; j<4; j++) {
            total += score[i][j];
        }
        avg = (float)total / 4;
        printf("%d %.1f\n", total, avg);
    }
}