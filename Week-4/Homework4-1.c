#include <stdio.h>
int main() {
    char input;
    scanf("%c", &input);
    if (input > 96 && input < 123) {
        printf("%c", input - 32);
    } else if (input > 64 && input < 91) {
        printf("%c", input + 32);
    } else {
        printf("error");
    }
    return 0;
}