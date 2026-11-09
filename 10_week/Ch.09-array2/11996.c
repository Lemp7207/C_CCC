#include <stdio.h>

int main() {
    int p[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                p[i][j] = 1;                          // 각 줄의 첫 번째 값은 1
            else
                p[i][j] = p[i-1][j] + p[i-1][j-1];    // 바로 위 + 바로 위 왼쪽
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                printf("%d", p[i][j]);
            else
                printf(" %d", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}