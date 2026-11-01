// 1. 공백
// 2. 별
// 3. 공백
// 줄바꿈 -> 이런 느낌?
#include <stdio.h>

int main() {
    int n = 0;
    for (int i=1; i<=5; i++) {
        for (int S=4; S>=i; S--) {
            printf(" ");
        }
        for (int j=1; j<=i + n; j++) {
            printf("*");
        }
        for (int S=4; S>=i; S--) {
            printf(" ");
        }
        printf("\n");
        n += 1;
    }
}