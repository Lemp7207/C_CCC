#include <stdio.h>

void bb(int arr[], int n) {
    // 0번 째 인덱스와 1번째 인덱스 검증
    // for (int i=0; i < n; i++) {
    //     for (int j=i+1; j < n; j++) {
    //         if (arr[i] > arr[j]) {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    int *p = arr; // *p에는 arr의 인덱스 0인 7이 있다
    for (int i = 4; i > 0; i--) {
        if (*p > arr[i]) {
            int temp = arr[i];
            arr[i] = *p;
            arr[0] = temp;
        }
    }
}

int main() {
    int arr[5] = {7, 4, 6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);   

    bb(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
}