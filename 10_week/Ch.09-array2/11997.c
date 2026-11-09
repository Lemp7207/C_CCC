#include <stdio.h>

int main() {
    int num[5][5] = {0};
    for (int i = 0; i<5; i++) {
        for (int j = 0; j<5; j++) {
            num[0][j] = 1;
            num[j][0] = 1;
        }
    }
    for (int i = 1; i<5; i++) {
        for (int j = 1; j<5; j++) {
            num[i][j] = num[i-1][j] + num[i][j-1];
        }
    }
    for (int i = 0; i<5; i++) {
        for(int j = 0; j<5; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
}