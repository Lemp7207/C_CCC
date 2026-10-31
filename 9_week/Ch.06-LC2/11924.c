#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    if (a > b) {
        for (b; b<=a; b++) {
            printf("%d ", b);
        }
    }
    else {
        for (a; a<=b; a++) {
            printf("%d ", a);
        }
    }
}