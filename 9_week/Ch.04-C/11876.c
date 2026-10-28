/* 선택제어문 - 자가진단7 
영문 대무나 입력받고
A = "Excellent"
B = "Good"
C = "Usually"
그 외 = "error
"*/

#include <stdio.h>

int main() {
    char s;
    scanf("%c", &s);

    switch (s) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Usually");
            break;
        default:
            printf("error");
    }
}