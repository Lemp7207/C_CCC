#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int nn = 1;
    for (int i = 1; i<=n; i++) {
        for (int j = i-1; j>0; j--) {
            printf("  ");
        }
        for (int j = n; j>=i; j--) {
            printf("%d ", nn);
            nn++;
        }
        printf("\n");
    }
}