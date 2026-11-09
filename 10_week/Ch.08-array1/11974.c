#include <stdio.h>

int main() {
    int n = 0;
    int num[100];
    int count = 0;
    while (1) {
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        num[count] = n;
        count++;
    }
    
    int max = num[0];
    int min = num[0];
    for (int i = 1; i<count; i++) {
        if (num[i] > max) {max = num[i];}
        if (num[i] < min) {min = num[i];}
    }
    printf("%d", max - min);
}