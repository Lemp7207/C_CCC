#include <stdio.h>
// 이분 탐색

int binarySearch(int arr[], int size, int target) {
    int start = 0;  // 배열 시작 위치
    int end = size - 1; // 배열 끝 위치
    
    // 0부터 end까지 i++
    // for (int i = start; i<=end; i++) {
    //     int m = (start + end) / 2; // 중간 위치

    //     if (arr[m] == target) {
    //         return m;
    //     }
    //     else if (arr[m] < target) {
    //         start = m + 1;
    //     }
    //     else {
    //         end = m - 1;
    //     }
    // }

    while (start <= end) {
        int m = (start + end) / 2;

        if (arr[m] == target) {
            return m;
        }
        else if (arr[m] < target) {
            start = m + 1;
        }
        else {
            end = m - 1;
        }
    }
    return -1;
}

int main() {
    // 반드시 정렬된 배열
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("배열에서 타겟의 위치는 : %d번에 있음", result);
    }
    else {
        printf("배열에서 찾을 수 없음");
    }
}