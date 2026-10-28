/* 선택제어문 - 자가진단8
0.0 이상 4.5 이하의 평점을 입력 받고
4.0 이상 => scholarship
3.0 이상 => next semester
2.0 이상 => seasonal semester
2.0 미만 => retake
*/

#include <stdio.h>

int main() {
    float num = 0.0;
    scanf("%f", &num);

    if (num >= 4.0f) {
        printf("scholarship");
    }
    else if (num >= 3.0f) {
        printf("next semester");
    }
    else if (num >= 2.0f) {
        printf("seasonal semester");
    }
    else {
        printf("retake");
    }
}