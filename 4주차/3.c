#include <stdio.h>

int p(int n)
{
    if (n==0)
    {
        return;
    }
    p(n-1);
    printf("%d\n", n);
}

int main()
{
    int n;

    printf("숫자 입력 : ");
    scanf("%d", &n);
    p(n);
    return 0;
}