#include <stdio.h>
#include <ctype.h>
int main() {
    char input;
    scanf("%c", &input);
    if (isdigit(input)) {
        printf("number");
    } else if (islower(input)) {
        printf("lowercase");
    } else if (isupper(input)) {
        printf("uppercase");
    } else {
        printf("error");
    }
    return 0;
}