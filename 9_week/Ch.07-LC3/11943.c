#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    char c = 'A';
    for (int i = 1; i<=n; i++) {
        for (int j = n; j>=i; j--) {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
}