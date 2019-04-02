#include <stdio.h>
#include <string.h>

int main() {
    char text[201];
    char temp;
    scanf("%s", text);
    for (int i = 0; i < strlen(text) - 1; i++) {
        for (int j = i + 1; j < strlen(text); j++) {
            if (text[i] < text[j]) {
            temp = text[i];
            text[i] = text[j];
            text[j] = temp;
            }
        }
    }
    printf("%s", text);
    return 0;
}