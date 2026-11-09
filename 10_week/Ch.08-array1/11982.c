#include <stdio.h>

int main() {
    int n = 0;
    int num = 0;
    int count = 0;
    for (int i = 0; i<100; i++) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        if (n % 5 == 0) {
            num += n;
            count++;
        }
    }

    float avg = (float)num / count;
    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\navg : %.1f", num, avg);
}