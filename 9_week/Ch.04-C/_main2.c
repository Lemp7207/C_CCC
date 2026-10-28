#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n == 0) {
        printf("zero");
    }
    else if (n > 0) {
        printf("plus");
    }
    else {
        printf("minus");
    }
}