#include <stdio.h>

int main() {
    int n = 0;
    int num[4][3] = {0};
    int score[4] = {0};
    int total = 0;
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<3; j++) {
            scanf("%d", &n);
            num[i][j] = n;
        }
        for (int j = 0; j<3; j++) {
            score[i] += num[i][j];
        }
        total += score[i];
    }

    for (int i = 0; i<4; i++) {
        printf("%d\n", score[i]);
    }
    printf("%d", total);
}