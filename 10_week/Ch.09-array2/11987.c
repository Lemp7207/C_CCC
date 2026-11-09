#include <stdio.h>

int main() {
    int n = 0;
    int num[10] = {0};
    while (1) {
        int x = 0;
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        x = n / 10;
        num[x]++;
    }
    
    for (int i = 0; i<10; i++) {
        if (num[i] != 0) {
            printf("%d : %d\n", i, num[i]);
        }
        else {
            continue;
        }
    }
}