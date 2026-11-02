#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int m = 0;
    for (int i = 1; i<=n; i++) {
        int M = n - i;
        // M = 2, 1, 0 
        for (int N = M*2; N>= 1; N--) {
            printf(" ");
        }
        for (int j = 1; j<=i + m; j++) {
            printf("*");
        }
        printf("\n");
        m++;
    }
}