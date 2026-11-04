#include <stdio.h>

int main() {
    int n[10] = {0};
    for (int i = 0; i<10; i++) {
        n[i] = i + 1;
        printf("%d ", n[i]);
    }
}