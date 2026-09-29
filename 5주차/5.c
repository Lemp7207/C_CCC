#include <stdio.h>

void bubble(int arr[], int l) {
    for (int i = 0; i < l - 1; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (arr[i] > arr[j + 1]) {
                int temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {7, 4, 5, 1, 3};
    int l = sizeof(arr) / sizeof(arr[0]);

    printf("초기 상태 배열 : [");
    for (int i = 0; i < l; i++) {
        printf("%d", &arr[i]);
    }
    printf("] \n");

    bubble(arr, l);

    printf("정렬된 배열 : [");
    for (int i = 0; i < l; i++) {
        printf("%d", &arr[i]);    
    }
    printf("]");

    return 0;
}