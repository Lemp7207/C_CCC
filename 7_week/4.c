#include <stdio.h>

#define MAX_S 50

void B(int p[], int ls) {

}

int main() {
    int s;
    int num[s];
    int score;
    int *p = num;
    
    printf("학생 수 입력 : ");
    scanf("%d", &s);
    if (s > MAX_S) {
        printf("최대 학생 수를 넘었습니다.");
        return 0;
    }

    int ls = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < s; i++) {
        printf("%d번 학생의 최종 성적을 입력하세요. : ");
        scanf("%d", &score);
        num[i] = score;
    }

    B(num, ls);

    printf("최고 성적 : %d\n");
    printf("최하 성적 : %d\n");
}