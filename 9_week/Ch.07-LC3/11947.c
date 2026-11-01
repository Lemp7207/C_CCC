#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        for (int  M = 5; M>=i; M--) {
            printf("*");
        }
        printf("\n");
    }
}