#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("%d \n", (*p)++);
    printf("%d \n", (*p)+1);
    printf("%d \n", *p += 1);
    printf("%d \n", (*p)+=1);
    printf("%d \n", *p = *p+1);
    printf("%d \n", ++*p);
    printf("%d \n   ", ++(*p));
}
