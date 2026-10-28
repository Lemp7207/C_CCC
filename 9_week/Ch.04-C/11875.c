/* 선택제어문 - 연습 문제 7
메뉴를 알려주는 프로그램 제작
1. ADD
2. EDIT
3. DEL
Select: 

간단하게 switch 사용 문제? */

#include <stdio.h>

int main() {
    int n = 0;

    printf("1. ADD\n2. EDIT\n3. DEL\n");
    scanf("%d", &n);

    switch (n) {
        case (1):
            printf("You selected ADD.");
            break;
        case (2):
            printf("You selected EDIT.");
            break;
        case (3):
            printf("You selected DEL.");
            break;
        default:
            printf("Wrong choice.");
    }
}