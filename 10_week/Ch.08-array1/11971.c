#include <stdio.h>

int main() {
    int n = 0;
    int num[] = {0};
    int nn = 0;
    int max = 0;
    scanf("%d", &n);
    
    for (int i = 0; i<n; i++) {
        scanf(" %d", &nn);
        if (nn > 0 && nn > max) {
            max = nn;
        }
    }
    printf("%d", max);
}