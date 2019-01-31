#include <stdio.h>
#include <math.h>
int main() {
    double var_a, var_b;
    scanf("%lf %lf", &var_a, &var_b);
    printf("%.2f", sqrt (pow (var_a, 2) + pow (var_b, 2)));
    return 0;
}