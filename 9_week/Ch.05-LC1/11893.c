/* 반복제어문1 - 연습4 */
#include <stdio.h>

int main() {
    int a = 0;
    int cnt = 0;
    int sum = 0;
    while (1) {
        scanf("%d", &a);

        cnt++;
        sum += a;

        if (a == 0) {
            break;
        }
    }

    cnt--;
    float avg = (float)sum / cnt;
    // 실수 계산 흠...

    printf("cnt = %d", cnt);
    printf("sum = %d", sum);
    printf("avg = %.2f", avg);
}