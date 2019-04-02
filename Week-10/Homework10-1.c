#include <stdio.h>
#include <string.h>
int main() {
    char text1[201], text2[201];
    scanf("%[^\n] %[^\n]", text1, text2);
    if (strlen(text1) > strlen(text2)) {
        printf("%s", text1);
    } else if (strlen(text1) < strlen(text2)) {
        printf("%s", text2);
    } else {
        printf("%s", "\\7");
    }
    return 0;
}