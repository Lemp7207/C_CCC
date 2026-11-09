#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int num[n];
    int a = 0;

    for (int i = 0; i<n; i++) {
        scanf(" %d", &a);
        num[i] = a;
    }

    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if(num[i] < num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i = 0; i<n; i++) {
        printf("%d\n", num[i]);
    }
}