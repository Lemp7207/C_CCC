#include <stdio.h>

int main() {
    int a = 0, b = 0;
    int num = 0;
    scanf("%d %d", &a, &b);

    for (int i = 1; i<=a; i++) {
        for (int j = 0; j<b; j++) {
            num += i;
            printf("%d ", num);
        }
        printf("\n");
        num = 0;
    }
}