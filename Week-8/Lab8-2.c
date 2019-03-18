#include <stdio.h>
#include <string.h>

struct student {
    char fname[61];
    char lname[61];
    char sex[7];
    int age;
    char id[13];
    float grade;
};

void scan(struct student data[]);
void sortFname(struct student data[]);
void sortLname(struct student data[]);
void sortId(struct student data[]);
void print(struct student data[]);

int main() {
    struct student data[20];
    char typesort[8];
    scan(data);
    scanf("%s", typesort);
    if (strcasecmp(typesort, "name") == 0) {
        sortFname(data);
    } else if (strcasecmp(typesort, "surname") == 0) {
        sortLname(data);
    } else if (strcasecmp(typesort, "id") == 0) {
        sortId(data);
    }
    print(data);
    return 0;
}

void scan(struct student data[]) {
    for (int i = 0; i < 20; i++) {
        scanf("%s %s %s %d %s %f", data[i].fname, data[i].lname, data[i].sex, &data[i].age, data[i].id, &data[i].grade);
    }
}

void sortFname(struct student data[]){
    struct student temp;
    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) { 
            if (strcasecmp(data[i].fname, data[j].fname) > 0) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void sortLname(struct student data[]){
    struct student temp;
    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) { 
            if (strcasecmp(data[i].lname, data[j].lname) > 0) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void sortId(struct student data[]){
    struct student temp;
    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) { 
            if (strcasecmp(data[i].id, data[j].id) > 0) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void print(struct student data[]){
    for (int i = 0; i < 20; i++) {
        if (strcmp(data[i].sex, "Male") == 0) {
            printf("Mr");
        } else if (strcmp(data[i].sex, "Female") == 0) {
            printf("Miss");
        }
        printf(" %c %s", data[i].fname[0], data[i].lname);
        printf(" (%d) ID: %s GPA %.2f\n", data[i].age, data[i].id, data[i].grade);
    }
}