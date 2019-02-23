#include <stdio.h>
#include <string.h>
int main() {
    char text[101];
    scanf("%[^\n]", text);
    for (int i = strlen(text); i > 0; i--) {
        printf("%c", text[i - 1]);
    }
    printf("\n");
    return 0;
}