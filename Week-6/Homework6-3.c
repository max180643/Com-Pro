#include <stdio.h>
#include <string.h>
int main() {
    char text[101];
    int check = 1;
    scanf("%[^\n]", text);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != text[strlen(text) - i - 1]) {
            check = 0;
        }
    }
    if (check == 1) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }
    return 0;
}