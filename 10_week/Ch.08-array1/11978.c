#include <stdio.h>

int main() {
    int n = 0;
    int num[5];
    for (int i = 0; i<5; i++) {
        scanf("%d", &n);
        num[i] = n;
    }
    printf("%d", num[0] + num[2] + num[4]);
}