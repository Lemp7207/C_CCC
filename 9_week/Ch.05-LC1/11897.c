#include <stdio.h>

int main() {
    while (1) {
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\n");
        printf("Enter number: ");    
        int n = 0;
        scanf("%d", &n);

        printf("\n");
        printf((n == 1) ? "You selected Input.\n":(n == 2) ? "You selected Output.\n":(n == 3) ? "You selected Delete.\n":(n == 4) ? "You selected Finish.\n":"Wrong input.\n" );
        printf("\n");
        if (n == 4) {
            break;
        }
    }
}