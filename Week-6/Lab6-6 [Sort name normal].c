#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[20][61], temp[61];
    for (int i = 0; i < 20; i++) {
        scanf(" %[^\n]", name[i]);
    }
    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (strcasecmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for (int i = 0; i < 20; i++) {
        for (int j = 0; name[i][j] != '\0'; j++) {
            if (j == 0) {
                printf("%c", toupper(name[i][j]));
            } else if (name[i][j - 1] == ' ') {
                printf("%c", toupper(name[i][j]));
            } else {
                printf("%c", tolower(name[i][j]));
            }
        }
        printf("\n");
    }
    return 0;
}