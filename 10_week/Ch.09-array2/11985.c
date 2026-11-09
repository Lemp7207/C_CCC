#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';
    int alpha[26] = {0};
    while (1) {
        scanf(" %c", &c);
        if (isalpha(c) && isupper(c)) {
            // A = 65 - Z = 90
            alpha[(int)c - 65]++;
        }
        else {
            break;
        }
    }

    for (int i = 0; i<26; i++) {
        if (alpha[i] != 0) {
            printf("%c : %d\n", i+65, alpha[i]);
        }
        else {
            continue;
        }
    }
}