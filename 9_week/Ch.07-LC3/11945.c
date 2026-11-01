#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int num = 1;
    char str = 'A';

    for (int i = 1; i<=n; i++) {
        for (int j = n; j>=i; j--) {
            printf("%d ", num);
            num++;
        }
        for (int j = 1; j<=i; j++) {
            printf("%c ", str);
            str++;
        }
        printf("\n");
    }
}