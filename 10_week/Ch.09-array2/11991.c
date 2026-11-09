#include <stdio.h>

int main() {
    int n = 0;
    int num[10] = {0};
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);
        num[i] = n;
    }

    for (int i = 0; i<10; i++) {
        for (int j = i+1; j<10; j++) {
            if (num[j] > num[i]) {
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    for (int i = 0; i<10; i++) {
        printf("%d ", num[i]);
    }
}