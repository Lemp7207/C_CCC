#include <stdio.h>

int main() {
    while (1) {
        printf("1. Korea\n2. USA\n3. Japan\n4. China\n");
        printf("number? ");
        int n = 0;
        scanf("%d", &n);

        printf("\n");
        printf((n==1) ? "Seoul\n":(n==2) ? "Washington\n":(n==3) ? "Tokyo\n":(n==4) ? "Beijing\n":"none");
        printf("\n");
        if (n < 1 || n > 4) {
            break;
        }
    }
}