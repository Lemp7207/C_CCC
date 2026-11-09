#include <stdio.h>

int main() {
    int n = 0;
    int num[100] = {0};
    for (int i = 0; i<100; i++) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        num[i] = n;
    }


    int max = num[0];
    int min = num[0];
    for (int i = 0; i<100; i++) {
        if (num[i] != 0) {
            if (num[i] > max) {max = num[i];}
            if (num[i] < min) {min = num[i];}
        }
    }
    printf("%d", max+min);
}