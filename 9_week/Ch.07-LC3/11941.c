#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        int m = n - i;
        for (int N = i-1; N>=1; N--) {
            printf(" ");
        }
        for (int j = n + m; j>=i; j--) {
            printf("*");
        }
        printf("\n");
    }
}