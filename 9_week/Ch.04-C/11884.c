/* 선택제어문 - 형성평가4 
번호 한 개
1 = dog 
2 = cat
3 = chick
? = blank
조건 = switch ~ case문 사용 
*/

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("dog");
            break;
        case 2:
            printf("cat");
            break;
        case 3:
            printf("chick");
            break;
        default:
            printf("blank");
    }
}