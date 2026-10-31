#include <stdio.h>

int main() {
    char s = 'A';
    for (int i = 0; i < 26; i++) {
        printf("%c", s + i);
    }
}