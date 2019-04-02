#include <stdio.h>
int main() {
    int count = 0;
    char text[1001];
    scanf("%[^\n]s", text);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}