#include <stdio.h>

void ins(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main() {
    int arr[] = {7, 5, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("   초기 배열 : [");
    for(int i=0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("]\n");

    ins(arr, n);

    printf("삽입 정렬 후 : [");
    for(int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }
    printf("]");
}

// 삽입 정렬
// 