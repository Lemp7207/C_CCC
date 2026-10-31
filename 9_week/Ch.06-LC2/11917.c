#include <stdio.h>

int main() {
    int sum = 0;
    int i;
    for (i = 1; i<=5; i++) {
        int n = 0;
        scanf("%d", &n);
        
        sum += n;
    }
    float avg = (float)sum / --i;

    printf("sum : %d\navg : %.1f", sum, avg);
}