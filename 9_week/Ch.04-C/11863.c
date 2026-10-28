#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    printf("%d\n", num);
    if (num > 10) {
        printf("Larger than 10.");
    }
}