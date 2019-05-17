#include <stdio.h>
#include <string.h>

int main(){
    int num, check = 0;
    char enter[10];
    struct Book {
        char id[10];
        char name[100];
        char author[100];
    };
    scanf("%d", &num);
    struct Book book[num];
    scanf("%s", enter);
    for (int i=0;i<num;i++){
        scanf("%s %s %s", book[i].id, book[i].name, book[i].author);
    }
    for (int i=0;i<num;i++){
        if (strcmp(enter, book[i].id) == 0){
            printf("%s %s %s\n", book[i].id, book[i].name, book[i].author);
            check = 1;
        }
    } if (check == 0){
        printf("Not Found\n");
    }
}
