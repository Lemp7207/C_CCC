#include <stdio.h>

int main() {
    int cat[7] = {0};
    int num;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        cat[num]++;
    }

    for (int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, cat[i]);
    }
}