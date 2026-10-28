/* 세 개의 정수를 입력받고 다음과 같이 출력
세 수가 모두 양수 (0보다 크면) => "All Positive"
세 수 중 하나라도 0이면 (|| - OR) => "Contain Zero"
그 외 => "Mixed" */

#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0) {
        printf("All Positive");
    }
    else if (a == 0 || b == 0 || c == 0) {
        printf("Contain Zero");
    }
    else {
        printf("Mixed");
    }
}