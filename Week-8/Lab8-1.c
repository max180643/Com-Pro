#include <stdio.h>
#include <string.h>
int main() {
    struct student_info {
        char fname[61];
        char lname[61];
        char gender[7];
        int age;
        char id[13];
        float grade;
    } student;
    scanf("%s %s %s %d %s %f", student.fname, student.lname, student.gender, &student.age, student.id, &student.grade);
    if (strcmp(student.gender, "Male") == 0) {
        printf("Mr");
    } else if (strcmp(student.gender, "Female") == 0) {
        printf("Miss");
    }
    printf(" %c %s", student.fname[0], student.lname);
    printf(" (%d) ID: %s GPA %.2f", student.age, student.id, student.grade);
    return 0;
}