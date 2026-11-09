#include <stdio.h>

int main() {
    int n = 0;
    int num[11] = {0};
    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        num[n/10]++;
    }

    for (int i = 10; i>=0; i--) {
        if (num[i] != 0) {
            printf("%d : %d\n", i*10, num[i]);
        }
    }
}