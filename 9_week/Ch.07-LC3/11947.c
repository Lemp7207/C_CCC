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
    for (int i = 1; i<=n-1; i++) {
        for (int j = n-i-1; j>=i; j--) {
            printf(" ");
        }
        for (int j = 1; j<=i*2+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // n = 3
    // *****
    //  ***
    //   *
    //  ***
    // *****
    // 이런 느낌
}