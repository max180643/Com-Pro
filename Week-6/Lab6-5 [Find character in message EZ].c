#include <stdio.h>
#include <ctype.h>
int main() {
    char text[301], pos[301], key;
    int total = 0, j = 0;
    scanf("%[^\n]", text);
    scanf(" %c", &key);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == tolower(key) || text[i] == toupper(key)) {
            pos[j] = i + 1;
            total++;
            j++;
        }
    }
    pos[j] = '\0';
    if (total != 0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", total, key);
        printf("Position:");
        for (int i = 0; i < j; i++) {
            if (i != j - 1) {
                printf(" %d,", pos[i]);
            } else {
                printf(" %d", pos[i]);
            }
        }
    } else {
        printf("Not found.");
    }
    return 0;
}