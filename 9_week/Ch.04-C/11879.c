/* 선택제어문 - 연습문제 9
두 개의 정수
조건연산자 이용
두 수 중 큰 수 출력
*/

#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    printf("%d", max);
}