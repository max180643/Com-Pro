#include <stdio.h>
#include <ctype.h>
int main() {
    char text[201];
    char key[26] = {
        'a', 'b', 'x', 'y', 'p', 'q',
        'r', 'm', 'n', 'c', 'e', 'd',
        'k', 'l', 'j', 'o', 's', 'h',
        't', 'u', 'f', 'v', 'z', 'g',
        'w', 'i'
    };
    scanf("%[^\n]", text);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            printf("%c", ' ');
        } else {
            for (int j = 0; j < 26; j++) {
                if (text[i] == key[j] && j < 5) {
                    printf("%c", key[j - 5 + 26]);
                } else if (text[i] == key[j]) {
                    printf("%c", key[j - 5]);
                } else if (text[i] == toupper(key[j]) && j < 5) {
                    printf("%c", toupper(key[j - 5 + 26]));
                } else if (text[i] == toupper(key[j])) {
                    printf("%c", toupper(key[j - 5]));
                }
            }
        }
    }
    return 0;
}