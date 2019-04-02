#include <stdio.h>
#include <string.h>
int main() {
    char text[20][201];
    char temp[201];
    for (int i = 0; i < 10; i++) {
        scanf("%s", text[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (strcasecmp(text[i], text[j]) > 0) {
                strcpy(temp, text[i]);
                strcpy(text[i], text[j]);
                strcpy(text[j], temp);
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%s\n", text[i]);
    } 
    return 0;
}