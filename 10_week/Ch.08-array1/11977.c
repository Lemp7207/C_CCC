#include <stdio.h>

int main() {
    char c;
    char list[10];
    for (int i = 0; i<10; i++) {
        scanf(" %c", &c);
        list[i] = c;
    }
    
    for (int i = 9; i>=0; i--) {
        printf("%c ", list[i]);
    }
}