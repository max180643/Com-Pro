#include <stdio.h>
#include <math.h>

double perimeter(double a, double b);
double area(double a, double b);

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Perimeter: %.2f\n", perimeter(a, b));
    printf("Area: %.2f", area(a, b));
    return 0;
}

double perimeter(double a, double b) {
    double c = sqrt(pow(a, 2) + pow(b, 2));
    return a + b + c;
}

double area(double a, double b) {
    return b * a / 2.0;
}

