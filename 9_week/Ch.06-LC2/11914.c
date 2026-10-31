#include <stdio.h>

int main() {
    int n = 0;
    int total = 0;
    scanf("%d", &n);

    for (int i = n; i<=100; i++) {
        total += i;
    }

    printf("%d", total);
}