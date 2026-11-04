#include <stdio.h>

int main() {
    int n = 0;
    int num[] = {0};
    int sum = 0;
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);
        num[i] = n;
        sum += n;
    }
    float avg = (float)sum / 10;
    printf("sum = %d\navg = %.1f", sum, avg);
}