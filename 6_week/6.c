#include <stdio.h>

int main() {
    for (int i = 1; i<=5; i++) {
        for (int j = 1; j<=5 - i; j++) {
            printf(" ");
        }
        for (int r = 1; r<=i; r++) {
            printf("*");
        }
        printf("\n");
    }

    // for (int i = 1; i<=5; i++) {
    //     for (int j = 4 - i; j<=1; j--) {
    //         printf(" ");
    //     }
    //     for (int r = 1; r<=i; r++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    
    return 0;
}