#include <stdio.h>
#include <string.h>
 
struct book {
    char name[1000];
    char author[1000];
    int total;
};
 
int main() {
    int book, total;
    scanf("%d %d", &book, &total);
    struct book data[total];
    struct book ans[book];
    if (book == 0 || total == 0) {
        printf("Have no book");
    } else {
        for (int i = 0; i < book; i++) {
            strcpy(ans[i].name, "");
        }
        for (int i = 0; i < total; i++) {
            scanf(" %[^,], %[^\n]", data[i].name, data[i].author);
            for (int j = 0; j < book; j++) {
                if (strcmp(ans[j].name, "") == 0) {
                    strcpy(ans[j].name, data[i].name);
                    strcpy(ans[j].author, data[i].author);
                    ans[j].total = 1;
                    break;
                } else if (strcasecmp(ans[j].name, data[i].name) == 0 && strcasecmp(ans[j].author, data[i].author) == 0) {
                    ans[j].total += 1;
                    break;
                }
            }
        }
        for (int k = 0; k < book; k++) {
            printf("%d %s, %s\n", ans[k].total, ans[k].name, ans[k].author);
        }
    }
    return 0;
}