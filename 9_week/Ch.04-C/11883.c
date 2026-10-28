/* 선택제어문 - 형성평가 3
윤년 평년 구하기
*/

#include <stdio.h>

int main() {
    int year = 0;
    scanf("%d", &year);
    
    // 생각을 잘 못 했네
    if ((year % 4 == 0 && year % 100 != 0) || 
        (year % 400 == 0)) {
        
        printf("leap year");
    }
    else {
        printf("common year");
    }
}