#include <stdio.h>

int main() {
    int a = 0, b = 0;
    int total = 0;
    int count = 0;
    scanf("%d %d", &a, &b);

    if (a > b) {
        for (b; b<=a; b++) {
            if (b % 3 == 0 || b % 5 == 0) {
                printf("%d\n", b);
                total += b;
                count ++;
            }
        }
    }
    else {
        for (a; a<=b; a++) {
            if (a % 3 == 0 || a % 5 == 0) {
                total += a;
                count ++;
            }
        }
    }

    float avg = (float)total / count;
    printf("sum : %d\navg : %.1f", total, avg);
}