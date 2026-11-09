#include <stdio.h>

int main() {
    int n = 0;
    int num[10];
    int sum = 0;
    int asum = 0;
    for (int i = 1; i<=10; i++) {
        scanf("%d", &n);
        num[i] = n;
        
        if (i % 2 == 0) {
            sum += num[i];
        }
        else {
            asum += num[i];
        }
    }

    float avg = (float)asum / 5; 
    printf("sum : %d\navg : %.1f", sum, avg);
}