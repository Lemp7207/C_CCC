/* 반복제어문1 연습2 */
#include <stdio.h>

int main() {
    int num = 1;
    int sum = 0;

    while (num <= 10) {
        sum += num;
        num++;
    }

    printf("sum = %d\n", sum);
    printf("num = %d", num);
}