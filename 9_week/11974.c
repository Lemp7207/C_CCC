#include <stdio.h>

int sort(int arr[], int size) {
    for (int i = 0; i<size; i++) {
        for (int j = 1; j<size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main() {
    int n = 0;
    int num[] = {0};
    int size = sizeof(num) / sizeof(num[0]);
    int max = 0, min = 0;
    for (int i = 0; i<=100; i++) {
        scanf("%d", &n);
        if (n == 0) {
            break;    
        }
        num[i] = n;
    }

    sort(num, size);

    max = num[size];
    min = num[0];

    printf("%d", max - min);
}