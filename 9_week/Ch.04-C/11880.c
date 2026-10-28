/* 선택제어문 - 자가진단 9
3개의 정수 입력받고
조건 연사자 사용
최소값 출력 */

#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int min = (a < b) ? (a < c) ? a : c : (b < c) ? b : c;
    /* 설명 - 일단 a랑 b 비교 해서 a가 작으면 c랑 비교해서 a가 작으면 -> a
    아니면 -> c
    처음으로 돌아가서 a보다 b가 작으면 b인데 다시 c랑 비교해서 진짜 b가 작으면 -> b
    아니면 -> c */
    printf("%d", min);
}