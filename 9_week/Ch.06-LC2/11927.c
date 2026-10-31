#include <stdio.h>

int main() {
    int n = 0;
    int e = 0;
    int o = 0;
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            e++;
        }
        
        if (n % 2 != 0) {
            o++;
        }
    }

    printf("even : %d\nodd : %d", e, o);
}