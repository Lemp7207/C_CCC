#include <stdio.h>

int main() {
    int n = 0;
    int e_count = 0;
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            e_count++;
        }
    }

    printf("Even numbers = %d", e_count);
}