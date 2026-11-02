#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        int m = n - i;
        for (int N = 1; N<=m; N++) {
            printf("  ");
        }
        for (int j = 1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}