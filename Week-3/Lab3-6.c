#include <stdio.h>
int main() {
    double height, weight;
    scanf("%lf %lf", &height, &weight);
    printf("Perimeter of rectangle = %.4f units", (height + weight) * 2);
    return 0;
}