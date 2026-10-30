#include <stdio.h>

int main() {
    while (1) {
        int b = 0;
        int h = 0;
        float area = 0.0f;
        char YN;
        scanf("%d %d", &b, &h);
    
        area = (b * h) * 0.5f;
        printf("Triangle area = %.1f\n", area);
        printf("Continue? ");
        scanf(" %c", &YN); // %c 앞에 공백을 추가하면 - 앞에 공백 및 개행을 전부 무시한다.
        
        if (YN != 'Y' && YN != 'y') {
            break;
        }
    }
}