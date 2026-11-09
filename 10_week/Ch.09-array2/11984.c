#include <stdio.h>

int main() {
    int n = 0;
    int num[11] = {0};
    int count = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            break;
        }

        num[n]++;
        count++;
    }
    printf("\n");
    for (int i = 1; i<=10; i++) {
        if (num[i] == 0) {
            continue;
        }
        else {
            printf("%d : %d\n", i,num[i]);
        }
    }
}