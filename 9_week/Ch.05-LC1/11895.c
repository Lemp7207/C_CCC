#include <stdio.h>

int main() {
    int MAX = 0;
    int MIN = 100;
    while (1) {
        int n = 0;
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n >= 1 && n <= 100 && n != 0) {
            if (n > MAX) {
                MAX = n;
            }
            if (n < MIN) {
                MIN = n;
            }
        }
        else {
            continue;
        }
    }

    printf("MAX = %d\n", MAX);
    printf("MIN = %d", MIN);
}