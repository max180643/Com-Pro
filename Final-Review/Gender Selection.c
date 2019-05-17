#include <stdio.h>
#include <string.h>
int main() {
    struct Person {
        char firstName[100];
        char lastName[100];
        int age;
        char gender[7]; // {Man,Woman}
    };
    int number;
    int error = 1;
    char select[7];
    scanf("%d", &number);
    struct Person p[number];
    for (int i = 1; i <= number; i++) {
        scanf("%s %s %d %s", p[i].firstName, p[i].lastName, &p[i].age, p[i].gender);
    }
    scanf("%s", select);
    for (int i = 1; i <= number; i++) {
        if (strcmp(p[i].gender, select) == 0) {
            printf("%s %s %d %s\n", p[i].firstName, p[i].lastName, p[i].age, p[i].gender);
            error = 0;
        }
    }
    if (error) {
        printf("%s", "error");
    }
}