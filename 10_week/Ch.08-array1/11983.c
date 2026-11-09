#include <stdio.h>

int main() {
    int n = 0;
    int num[100] = {0};
    int count = 0;
    for (int i = 0; i<100; i++) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        else {
            count++;
        }

        num[i] = n;
    }

    printf("%d\n", count);
    for (int i = 0; i<100; i++) {
        if (num[i] != 0) {
            if (num[i] % 2 == 0) {
                num[i] /= 2;
            }
            else {
                num[i] *= 2;
            }

            printf("%d ", num[i]);
        }
    }
}