#include <stdio.h>

int main() {
    while (1) {
        int a = 0;
        scanf("%d", &a);

        if (a == -1) {
            break;
        }
    
        if (a % 3 == 0) {
            printf("%d\n", a / 3);
        }
        else {
            continue;
        }
    }
}