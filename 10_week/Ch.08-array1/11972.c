#include <stdio.h>

int main() {
    int n = 0; 
    int num[10] = {0};
    int min = 1000;
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);
        num[i] = n;
        if (num[i] < min) {
            min = num[i];
        }
    }
    printf("%d", min);
}