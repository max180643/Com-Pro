#include <stdio.h>
#include <string.h>
int main() {
    char text[101];
    int start = 0, end = 0, count = 0, length = 0, blank = 1;
    scanf("%[^\n]", text);
    text[strlen(text)] = ' ';
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == ' ') {
            if (count > length && blank == 1) {
                length = count;
                end = i - 1;
            } else if (count > length && blank != 1) {
                length = count;
                end = i - 1;
                start = i - length;
            }
            count = 0;
            blank++;
        } else {
            count++;
        }
    }
    for (int j = start; j <= end; j++) {
        printf("%c", text[j]);
    }
    return 0;
}