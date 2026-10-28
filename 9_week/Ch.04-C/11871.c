#include <stdio.h>

/*주사위를 두 번 던져서 나온 수를 입력받아 
두 수가 모두 4 이상이면 "WIN.", 
한 개만 4 이상이면 “DRAW.", 
모두 4 미만이면 "LOSE." 라고 출력하는 프로그램을 작성하기*/

int main() {
    int a, b = 0;
    scanf("%d %d", &a, &b);

    if (a >= 4 && b >= 4) {
        printf("WIN.");
    }
    else if (a >= 4 || b >= 4) {
        printf("DRAW.");
    }
    else {
        printf("LOSE.");
    }
}