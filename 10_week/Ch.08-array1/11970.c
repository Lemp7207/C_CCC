#include <stdio.h>

int main() {
    float score[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int c = 0, C = 0;
    scanf("%d %d", &c, &C);

    printf("%.1f", score[c-1]+score[C-1]);
}