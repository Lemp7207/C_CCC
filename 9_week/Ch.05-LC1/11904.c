#include <stdio.h>

int main() {
    int count = 0;
    while (1) {
        int n = 0;
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        else if(n % 3 == 0 || n % 5 == 0) {
            continue;
        }
        else {
            count++;
        }
    }

    printf("%d", count);
}