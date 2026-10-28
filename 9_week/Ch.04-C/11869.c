#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int nn = n / 10;
    switch(nn){
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
}