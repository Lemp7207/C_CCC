#include <stdio.h>

int main() {
    int n = 0;
    int num = 0;
    scanf("%d", &n);

    for (int i = 0; i<10; i++) {
        num += n;
        printf("%d ", num);
    }
}