#include <stdio.h>

int main() {
    int total = 0;
    int count = 0;
    float avg = 0.0f;
    while (1) {
        int n = 0;
        scanf("%d", &n);

        if (n < 0 || n > 100) { // 조건 이해가 부족한가?
            break;
        }
        else {
            total += n;
            count++;
        }
    }

    avg = (float)total / count;
    printf("sum : %d\navg : %.1f", total, avg);
}