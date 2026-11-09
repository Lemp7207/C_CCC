#include <stdio.h>

int main() {
    int n = 0;
    int num[4][4] = {0};

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            scanf("%d", &n);
            num[i][j] = n;
        }
    }
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            num[i][3] += num[i][j];
        }
        for (int j = 0; j<3; j++) {
            num[3][i] += num[j][i];
        }
        num[3][3] += num[3][i];
    }

    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
}