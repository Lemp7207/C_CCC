#include <stdio.h>

int main() {
    int n[100] = {0};
    int nn = 0;
    for (int i = 0; i<100; i++) {
        scanf("%d", &nn);
        n[i] = nn;
        if (nn == 0) {
            break;
        }
    }
    for (int i = 99; i>=0; i--) {
        if (n[i] != 0) {
            printf("%d ", n[i]);
        }
    }
}