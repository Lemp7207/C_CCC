/*선택 제어문 - 자가진단 6
정수 하나 입력
양수 -> 짝수 ("Even Number") / 홀수 ("Odd Number")
양수 X -> "Non positive "*/

#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("Even Number");
        }
        else {
            printf("Odd Number");
        }
    }
    else {
        printf("Non positive");
    }
}