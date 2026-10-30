#include <stdio.h>

int main() {
    int small = 0;
    int large = 0;
    while (1) {
        int a = 0;
        scanf("%d", &a);

        if (a >= 100) {
            large++;
            break;
        }

        if (a >= 50) {
            large++;
        }
        else {
            small++;
        }
    }

    printf("small : %d\n", small);
    printf("large : %d", large);
}