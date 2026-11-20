#include <stdio.h>

struct student {
    char name[50];
    char school_name[50];
    int grade;
};

int main() {
    struct student st;

    scanf("%49s %49s %d", st.name, st.school_name, &st.grade);

    printf("Name : %s\nSchool : %s\nGrade : %d", st.name, st.school_name, st.grade);
}