/* 선택제어문 - 연습문제 8
점수 입력받고
ABCDF 평가 프로그램 제작 */

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    n /= 10;
    switch (n) {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
    }
}