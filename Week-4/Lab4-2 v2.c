#include <stdio.h>
#define swap(num1, num2) {num1 = num1 + num2; num2 = num1 - num2; num1 = num1 - num2;}
int main() {
    double num1, num2, num3;
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if (num1 > num3) swap(num1 ,num3);
    if (num1 > num2) swap(num1, num2);
    if (num2 > num3) swap(num2, num3);
    printf("%.2f", num2);
    return 0;
}