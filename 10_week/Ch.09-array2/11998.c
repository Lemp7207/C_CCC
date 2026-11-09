#include <stdio.h>

int main() {
    int n = 0;
    int num[6] = {0};
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);
        num[n-1]++;
    }
    for (int i = 0; i<6; i++) {
        printf("%d : %d\n", i+1, num[i]);
    }
}