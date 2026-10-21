#include <stdio.h>

void sel(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min = i;

        for (int j = i+1; j < n; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int a[5] = {3, 4, 7, 1, 8};
    int n = sizeof(a) / sizeof(a[0]);
    
    sel(a, n);
    printf("선택 정렬됨 [ ");
    for (int i=0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("]");

    return 0;
}

// 선택 정렬