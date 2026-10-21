#include <stdio.h>

int main() {
    int A, B, C;
    int num, n;
    int arr[11] = {0};

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    num = A * B * C;

    // for (int i = 0; i < 11; i++) {
    //     num %= 10;
    //     num /= 10;

    //     arr[num]++;
    // }

    while (num > 0) {
        arr[num % 10]++;
        num /= 10;
    }
    for (int i = 0; i < 11; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}