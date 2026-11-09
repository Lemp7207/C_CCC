#include <stdio.h>

int main() {
    int n = 0;
    int num[10];
    int even = 0;
    int odd = 0;
    for (int i = 1; i<=10; i++) {
        scanf("%d", &n);
        num[i] = n;

        if (i % 2 == 0) {
            even += num[i];
        }
        else {
            odd += num[i];
        }
    }
    printf("odd : %d\neven : %d", odd, even);
}