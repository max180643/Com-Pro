#include <stdio.h>
#include <string.h>
int main() {
    char c1[1024], c2[1024], temp[1024];
    int pos;
    scanf("%s %s %d", c1, c2, &pos);
    for (int i = 1; i < pos; i++) {
        strcpy(temp, c1);
        strcpy(c1, c2);
        strcpy(c2, temp);
        strcat(c2, c1);
    }
    printf("%s", c1);
    return 0;
}
