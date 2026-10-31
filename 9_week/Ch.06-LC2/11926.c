#include <stdio.h>

int main() {
    int n = 0;
    int num = 0;
    int total = 0;
    scanf("%d", &n);

    for (int i = 0; i<n; i++) {
        scanf(" %d", &num);

        total += num;
    }

    float avg = (float)total / n;
    printf("%.2f", avg);
}