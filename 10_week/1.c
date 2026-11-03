#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'M';
    printf("문자 : %c\n", c);
    
    printf("알파벳 여부: %s\n", isalpha(c) ? "예":"아니요");
    printf("대문자 여부: %s\n", isupper(c) ? "예":"아니요");
    printf("소문자 여부: %s\n", islower(c) ? "예":"아니요");
    printf("숫자 여부: %s\n", isdigit(c) ? "예":"아니요");
    printf("알파벳 또는 숫자 여부: %s\n", isalnum(c) ? "예":"아니요");
    printf("16진수 숫자 여부: %s\n", isdigit(c) ? "예":"아니요");
    printf("구두점 문자 여부: %s\n", ispunct(c) ? "예":"아니요");
    printf("인쇄 가능 문자 여부: %s\n", isprint(c) ? "예":"아니요");
    printf("제어 문자 여부: %s\n", iscntrl(c) ? "예":"아니요");
    printf("아스키 문자 여부: %s\n", isascii(c) ? "예":"아니요");
}