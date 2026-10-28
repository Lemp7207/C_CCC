/* 선택제어문 - 형성평가 5
1 ~ 12 사이의 정수
평년의 경우 입력받는 월의 날수 출력
(switch case)
*/

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    switch (n) {
        case 2:
            printf("28");
            break;
        case 4: 
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        default:
            printf("31");   
    }
}