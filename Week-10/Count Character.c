#include <stdio.h>

int main(){
    int vovel = 0, count = 0;
    char text[201];
    scanf("%s",text);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
            vovel++;
        } else if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
            vovel++;
        } else {
            count++;
        }
    }
    printf("consonant : %d", count);
    printf("vowel     : %d", vovel);
    return 0;
}
