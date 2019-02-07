#include <stdio.h>
int main() {
    double num1, num2, num3, temp;
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if (num1 > num3) {
        temp = num3;
        num3 = num1;
        num1 = temp;
    }
    if (num1 > num2) {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if (num2 > num3) {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    printf("%.2f", num2);
    return 0;
}