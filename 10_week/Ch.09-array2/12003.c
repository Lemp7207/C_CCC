#include <stdio.h>

int main() {
    int num[5][5] = {0};

    num[0][0] = 1;
    num[0][2] = 1;
    num[0][4] = 1;

    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j > 0)
                num[i][j] += num[i-1][j-1];
            if (j < 4)
                num[i][j] += num[i-1][j+1];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0)
                printf("%d", num[i][j]);
            else
                printf(" %d", num[i][j]);
        }
        printf("\n");
    }
}