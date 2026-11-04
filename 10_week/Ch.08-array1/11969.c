#include <stdio.h>

int main() {
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n = 0;
    while (1) {
        scanf("%d", &n);

        if (n < 1 || n > 12) {
            break;
        }
        else {
            printf("%d\n", day[n-1]);
        }
    }
}