#define PI 3.141592654

#include <stdio.h>
int main() {
    struct ConeSurface {
    double r;
    double L;
    } cone1, cone2;
    scanf("%lf %lf %lf %lf", &cone1.r, &cone1.L, &cone2.r, &cone2.L);
    printf("%.2f\n", (PI * cone1.r * cone1.L) + (PI * (cone1.r * cone1.r)));
    printf("%.2f\n", (PI * cone2.r * cone2.L) + (PI * (cone2.r * cone2.r)));
    return 0;
}