#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    if (a > b) {
        for (int i = 1; i<=9; i++) {
            for (int j = a; j>=b; j--) {
                printf("%d * %d = %2d   ", j, i, j*i);
            }
            printf("\n");
        }
    }
    else {
        for (int i = 1; i<=9; i++) {
            for (int j = a; j<=b; j++) {
                printf("%d * %d = %2d   ", j, i, j*i);
            }
            printf("\n");
        }
    }
}