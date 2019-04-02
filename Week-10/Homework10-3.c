#include <stdio.h>
int main() {
    struct check {
        char key;
        int count;
    } check[200];
    int max = 0;
    int count = 0;
    int check_item = 0;
    char text[201];
    scanf("%[^\n]", text);
    for (int i = 0; text[i] != '\0'; i++) {
        for (int j = 0; j <= count; j++) {
            if (check[j].key == text[i]) {
                check[j].count += 1;
                check_item = 1;
            }
        }
        if (check_item == 0) {
            check[count].key = text[i];
            check[count].count = 1;
            count++;
        }
        check_item = 0;
    }
    for (int i = 0; i < count; i++) {
        if (check[i].count > max) {
            max = check[i].count;
        }
    }
    for (int i = 0; i < count; i++) {
        if (check[i].count == max) {
           printf("%c", check[i].key);
        }
    }
    return 0;
}