#include <stdio.h>

int main() {
    for (int i = 1; i<=9; i++) {
        for (int j = 2; j<=4; j++) {
            printf("%d * %d = %2d   ", j, i, i*j);
            // %2d : 오른쪽 정렬 (기본), 모자란 부분은 공백
        }
        printf("\n");
    }
}