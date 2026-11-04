#include <stdio.h>

int main() {
    int n = 0;
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);
        if (i % 2 != 0 && n != 0) {
            printf("%d ", n);
        }
        if (n == 0) {
            break;
        }
    }
}