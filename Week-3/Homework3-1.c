#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int main() {
    float price, diameter, height, volume;
    scanf("%f %f %f", &price, &diameter, &height);
    volume = height * PI * pow (diameter/2, 2);
    printf("Volume : %.2fml\n", volume);
    printf("Baht/ml : %.4f\n", price / volume);
    return 0;
}