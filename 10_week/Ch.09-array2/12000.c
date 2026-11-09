#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    int num[10] = {a, b};
    for (int i = 2; i<10; i++) {
        num[i] = (num[i-2] + num[i-1]) % 10;
    }
    for (int i = 0; i<10; i++) {
        printf("%d ", num[i]);
    }
}