#include <stdio.h>

int main() {
    int n = 0;
    int num[] = {0};
    int I = 0;
    int max = 0;
    int min = 0;
    while (I >= 0) {
        scanf(" %d", &n);
        num[I] = n;
        if (n == 0) {
            break;
        }
        I++;
    }
    // int size()
    printf("%d", max - min);
}