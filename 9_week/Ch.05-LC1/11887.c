/* 반복제어문1 - 1
알파벳 'A'부터 'Z'까지 출력
*/

#include <stdio.h>

int main() {
    // 대문자 A의 아스키코드 10진수로 => 65
    char start = 'A';
    for (int i = 0; i < 26; i++) {
        printf("%c", start);
        (int)start++;
    }
}