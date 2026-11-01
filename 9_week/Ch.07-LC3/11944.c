#include <stdio.h>

int main() {
    int n = 1;
    char c = 'a';
    for (int i = 1; i<=4; i++) {
        for (int j=1; j<=i; j++) {
            printf("%c ", c);
            c++;
        }
        for (int j=5; j>i; j--) {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}