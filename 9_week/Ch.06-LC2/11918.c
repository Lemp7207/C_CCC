#include <stdio.h>

int main() {
    int n = 0;
    int total = 0;
    scanf("%d", &n);

    for (int i = 0; i<n; i++) {
        int num = 0;
        scanf("%d", &num);

        total += num;
    }

    float avg = (float)total / n;

    printf("avg : %.1f\n", avg);
    if (avg >= 80) {
        printf("pass");
    }
    else {
        printf("fail");
    }
}