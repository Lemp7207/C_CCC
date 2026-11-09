#include <stdio.h>

int main() {
    int n = 0;
    int num[20] = {1, 1, 0};
    for (int i = 0; i<20; i++) {
        if (i <= 1) {
            printf("%d ", num[i]);
        }
        else {
            printf("%d ", num[i-2] + num[i-1]);
            num[i] = num[i-2] + num[i-1];
        }
    }
}