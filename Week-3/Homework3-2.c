#include <stdio.h>
int main() {
    int total;
    float price, discount, discount_price;
    scanf("%f %f %d", &price, &discount, &total);
    printf("%.2f", (price * ((100 - discount) / 100.0) * total));
    return 0;
}