#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person per[3];

    for (int i = 0; i<3; i++) {
        scanf("%49s %d", per[i].name, &per[i].age);
        printf("Name : %s\nAge : %d\n", per[i].name, per[i].age);
    }
}