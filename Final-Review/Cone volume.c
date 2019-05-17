#include <stdio.h>

#define PI 3.141592654

double cone(double r, double h);

int main() {
    struct Cone {
        double r;
        double h;
    } c1, c2;
    scanf("%lf %lf", &c1.r, &c1.h);
    scanf("%lf %lf", &c2.r, &c2.h);
    printf("%.2f\n", cone(c1.r, c1.h));
    printf("%.2f", cone(c2.r, c2.h));
}

double cone(double r, double h) {
    return (1.0/3) * (PI * (r * r)) * h;
}