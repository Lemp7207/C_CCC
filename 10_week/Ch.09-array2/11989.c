#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int s = 100;
    int x = 0;

    printf("%d %d ", s, n);
    while (1) {
        x = s - n; // 전전항 전항 
        printf("%d ", x);
        if (x < 0) {
            break;
        }
        s = n;
        n = x;
    }
}