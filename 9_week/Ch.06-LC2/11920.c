#include <stdio.h>

int main() {
    for (int i = 1; i<=5; i++) {
        for (int j = i+1; j<=i+5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}