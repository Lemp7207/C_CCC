/* 선택제어문 - 연습문제 6
정수 3개를 입력받고 가장 큰 수 출력 */

#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("max = %d", a);
    }
    else if (b > a && b > c) {
        printf("max = %d", b);
    }
    else {
        printf("max = %d", c);
    }
}