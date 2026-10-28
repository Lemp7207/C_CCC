/* 선택제어문 - 형성평가 6
정수 하나 입력
짝수 = "Even"
홀수 = "Odd"
조건 연산자 사용
*/

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    printf((n % 2 == 0) ? "Even" : "Odd");
}