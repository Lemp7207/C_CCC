#include <stdio.h>

void ins(int arr[], int n) {
    for(int i=0; i < n; i++) {
        for(int j=0; j<n; j++) {

        }
    }
}

int main() {
    int arr[] = {7, 5, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("   초기 배열 : [");
    for(int i=0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("]");

    ins(arr, n);

    printf("삽입 정렬 후 : [");
    for(int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }
    printf("]");
}

// 삽입 정렬
// 