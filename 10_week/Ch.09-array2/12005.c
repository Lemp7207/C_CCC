#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int num[10][10] = {0};

    for (int i = 0; i < n; i++) {
        num[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            num[i][j] = num[i-1][j] + num[i-1][j-1];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                printf("%d", num[i][j]);
            else
                printf(" %d", num[i][j]);
        }
        printf("\n");
    }
}