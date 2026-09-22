#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int num;
    int count = 0;
    int r;

    srand(time(NULL));

    r = rand() % 100 + 1;

    printf("1부터 100사이에 숫자 맞춰보기");

    while(1)
    {
        printf("숫자 입력하기 : ");
        scanf("%d", &num);
        count += 1;

        if (num > r)
        {
            printf("입력한 숫자가 높습니다.");
        }
        else if (num < r)
        {
            printf("입력한 숫자가 낮습니다.");
        }
        else
        {
            printf("정답입니다.");
            printf("%d번 반복만에 맞췄습니다.\n", count);
            break;
        }
    }
}