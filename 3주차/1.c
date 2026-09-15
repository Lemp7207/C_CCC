#include <stdio.h>

int main() {
    int year = 0;
    printf("연도 입력 : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400) {
        printf("윤년이다.");
    }
    else {
        printf("아니다");
    }
}