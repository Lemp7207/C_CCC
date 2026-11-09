#include <stdio.h>

int main() {
    int num[5] = {95, 75, 85, 100, 50};

    for (int i = 0; i<5; i++) {
        for (int j = i+1; j<5; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i<5; i++) {
        printf("%d ", num[i]);
    }
}