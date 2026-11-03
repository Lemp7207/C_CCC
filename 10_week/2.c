#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열 초기화
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    // 변수 선언
    char ch = 'p';
    int n = 3;

    // strlen() -> 문자열의 길이 계산
    // str1 = "Back" -> 4 : strlen(str1) -> 4 
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len); // 결과 : 4

    // strcpy(문자열1, 문자열2) : 문자열2 내용을 -> 문자열1에 복사
    // str1 = "Back" -> str3 = "Back"
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3); // 결과 : Back

    // strncpy(문자열1, 문자열2, n) : 문자열2 문자의 시작부터 n번째까지 -> 문자열1에 복사
    // str2 = "Space" -> str3 = "Spa"
    strncpy(str3, str2, n);
    str3[n] = '\0';
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3); // 결과 : Spa
}