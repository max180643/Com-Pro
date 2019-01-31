#include <stdio.h>
int main() {
    float number1, number2, number3, number4;
    scanf("%f", &number1);
    scanf("%f", &number2);
    scanf("%f", &number3);
    scanf("%f", &number4);
    printf("Summation is %.2f\n", (number1 + number2 + number3 + number4));
    printf("Average is %.3f\n", (number1 + number2 + number3 + number4)/4);
    return 0;
}