#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    if (num >= 80) {
        printf("Passed.");
    }
    else {
        printf("Failed.");
    }
}