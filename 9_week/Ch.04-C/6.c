#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int year = 20 - n;
    if (n >= 20) {
        printf("adult");
    }
    else {
        printf("%d years later", year);
    }
}