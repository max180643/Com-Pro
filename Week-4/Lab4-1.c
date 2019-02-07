#include <stdio.h>
int main() {
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    if (number1 == number2) {
        printf("%d + %d = %d", number1, number2, number1 + number2);
    }
    else {
        printf("%d - %d = %d", number1, number2, number1 - number2);
    }
    return 0;
}