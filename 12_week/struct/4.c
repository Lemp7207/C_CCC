#include <stdio.h>
#include <string.h>

struct school {
    char name[50];
    int grade;
};

int main() {
    struct school sc;

    strcpy(sc.name, "Jejuelementary");
    sc.grade = 6;
    printf("%d grade in %s School\n", sc.grade, sc.name);

    scanf("%49s %d", sc.name, &sc.grade);
    printf("%d grade in %s School", sc.grade, sc.name);
}