#include <stdio.h>

int main() {
    int num[4][2] = {0};
    int r[4] = {0};
    int c[2] = {0};
    int total = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &num[i][j]);
            r[i] += num[i][j];
            c[j] += num[i][j];
            total += num[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        if (i == 0)
            printf("%d", r[i] / 2);
        else
            printf(" %d", r[i] / 2);
    }
    printf("\n");

    for (int j = 0; j < 2; j++) {
        if (j == 0)
            printf("%d", c[j] / 4);
        else
            printf(" %d", c[j] / 4);
    }
    printf("\n");

    printf("%d\n", total / 8);
}