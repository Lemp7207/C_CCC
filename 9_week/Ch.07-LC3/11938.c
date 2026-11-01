#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        for (int M = n-1; M>=i; M--) {
            printf(" ");
        }
        for (int j = i; j>=1; j--) {
            printf("*");
        }
        printf("\n");
    }
}