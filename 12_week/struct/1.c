#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person per;

    scanf("%49s", per.name);
    scanf("%d", &per.age);

    printf("Your name is %s and you are %d years old.", per.name, per.age);
}