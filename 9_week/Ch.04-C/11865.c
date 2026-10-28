#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    printf("Input value : %d\n", num);
    if (num > 0) {
        printf("Positive number");
    }
}