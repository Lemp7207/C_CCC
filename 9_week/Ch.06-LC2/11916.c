#include <stdio.h>

int main() {
    int n = 0, a = 0, b = 0; // 중복 정의 할 때 이렇게 써야 할 듯
    // -> n,a,b = 0 하니까 b에만 0이 들어감 : 부족한 부분이 많은데
    for (int i = 0; i<10; i++) {
        scanf("%d", &n);

        if (n % 3 == 0) {
            a++;
        }

        if(n % 5 == 0) {
            b++;
        }
    }

    printf("Multiples of 3 : %d\n", a);
    printf("Multiples of 5 : %d", b);
}