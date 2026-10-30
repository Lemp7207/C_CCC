/* 반복문제어문1 -  자가진단2 */
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int sum = 0;
    int a = 1;

    while (a <= n) {
        sum += a;
        a++;
    }

    printf("%d", sum);
}