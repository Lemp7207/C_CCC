#include <stdio.h>

int main() {
    int n = 0;
    int num[] = {0};
    int max = 0;
    int min = 0;
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);
        num[i] = n;
        if (num[i] <= 0 && num[i] < min) {
            min = num[i];
        }
        if (num[i] >= 0 && num[i] > max) {
            max = num [i];
        }
    }

    printf("%d %d", max, min);
}