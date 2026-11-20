#include <stdio.h>
#include <string.h>

struct Per {
    char name[50];
    int age;
};

int main() {
    struct Per p;

    strcpy(p.name, "Yejun");
    p.age = 12;

    printf("Your name: %s, age: %d\n", p.name, p.age);

    scanf("%49s %d", p.name, &p.age);

    printf("Friend's name: %s, age: %d", p.name, p.age);
}