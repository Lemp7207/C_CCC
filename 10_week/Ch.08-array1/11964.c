#include <stdio.h>

int main() {
    char str[10];
    char s;
    for (int i = 0; i<10; i++) {
            scanf(" %c", &s); // 앞에 띄어쓰면 공백 무시함
            str[i] = s;
    }

    for (int i = 0; i<10; i++) {
        printf("%c", str[i]);
    }
}