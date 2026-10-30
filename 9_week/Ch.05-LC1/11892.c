/* 반복문제어문1 - 자가진단 3 */
#include <stdio.h>

int main() {
    while (1) {
        int n = 0;
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        else if (n > 0) {
            printf("positive number\n");
        }
        else {
            printf("negative number\n");
        }
    }
}