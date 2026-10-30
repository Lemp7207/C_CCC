/* 반복제어문1 - 연습3 */
#include <stdio.h>

int main() {
    while (1) {
        int num = 0;
        scanf("%d", &num);
    
        if (num > 100 || num < 0) {
            break;
        }
        else if (num >= 80) {
            printf("Pass\n");
        }
        else {
            printf("Fail\n");
        }
    }
}