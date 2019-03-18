#include <stdio.h>
#include <string.h>
int main() {
    int total, check = 0;
    char select[10];
    scanf("%d", &total);
    struct Record {
        char id[10];
        char name[100];
        long salary;
        long sales;
    } staff[total];
    for (int i = 0; i < total; i++) {
        scanf("%s %s %ld %ld", staff[i].id, staff[i].name, &staff[i].salary, &staff[i].sales);
    }
    scanf("%s", select);
    for (int i = 0; i < total; i++) {
        if(strcmp(staff[i].id, select) == 0) {
            check += 1;
            printf("%s\n%s\n%ld\n", staff[i].id, staff[i].name, staff[i].sales);
            printf("%.2f\n%ld\n%.2f", staff[i].sales * 0.02, staff[i].salary, staff[i].sales * 0.02 + staff[i].salary);
            break;
        }
    }
    if (check == 0) {
        printf("ID not found !!!");
    }
    return 0;
}