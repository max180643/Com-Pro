#include <stdio.h>
int main() {
    double number1, number2;
    scanf("%lf,%lf", &number1, &number2);
    printf("The sum of the given numbers : %f\n", number1 + number2);
    printf("The difference of the given numbers : %f\n", number1 - number2);
    printf("The product of the given numbers : %f\n", number1 * number2);
    printf("The quotient of the given numbers : %f\n", number1 / number2);
}