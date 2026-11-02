#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    char c = 'A';
    int nn = 0;
    for (int i = 1; i<=n; i++) {
        for (int j = n; j>=i; j--) {
            printf("%c ", c);
            c++;
        }
        for (int j = 2; j<=i; j++) {
            printf("%d ", nn);
            nn++;
        }
        printf("\n");
    }
}