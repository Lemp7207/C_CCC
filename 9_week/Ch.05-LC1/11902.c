#include <stdio.h>

int main() {
    int e = 0;
    int o = 0;
    while (1) {
        int n = 0;
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        else if (n % 2 != 0) {
            e++;
        }
        else {
            o++;
        }
    }
    printf("odd : %d\neven : %d", e, o);
}