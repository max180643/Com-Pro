#include <stdio.h>
#include <string.h>
int main() {
    char text1[101], text2[101];
    scanf("%s %s", text1, text2);
    int max, check = 0;
    if (strlen(text1) > strlen(text2)) {
        max = strlen(text1);
    } else {
        max = strlen(text2);
    }
    for (int i = 0; i < max; i++) {
        if (i < strlen(text1)) {
            printf("%c", text1[i]);
        }
        if (i < strlen(text2)) {
            printf("%c", text2[i]);
        }
    }
}