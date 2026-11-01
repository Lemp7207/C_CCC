#include <stdio.h>

int main() {
    // for (int i = 1; i<=6; i++) {
    //     int n = 1;
    //     if (i >= 4) {
    //         for (int j = i - n; j >= n; j--) {
    //             printf("*");
    //         }
    //         n++;
    //     }
    //     else {
    //         for (int j = 1; j<=i; j++) {
    //             printf("*");
    //         }
    //     }
    //     printf("\n");
    // }
    for (int i = 1; i<=3; i++) {
        for (int j = 1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i<=3; i++) {
        for (int j = 3; j>=i; j--) {
            printf("*");
        }
        printf("\n");
    }
}