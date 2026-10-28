#include <stdio.h>

int main() {
    int w = 0;
    int h = 0;
    int m = 0;
    scanf("%d %d", &h, &w);

    m = w + 100 - h;
    printf("%d\n", m);
    if (m > 0) {
        printf("Obesity\nNeed control");
    }
}