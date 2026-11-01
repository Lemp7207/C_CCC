#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i<n; i++) {
        for (int N = 0; N<i; N++) { // 공백 먼저?
            printf(" ");
        }
        for (int j = n; j>i; j--) {
            printf("*");
        }
        printf("\n");
    }
}