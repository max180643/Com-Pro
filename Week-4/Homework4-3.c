#include <stdio.h>
int main() {
    float price, promo1, promo2;
    int total, percent;
    scanf("%f %d %d", &price, &percent, &total);
    promo1 = price * total * ((100 - percent) / 100.0);
    promo2 = (total - (total / 3)) * price;
    if (promo1 <= promo2) {
        printf("Discount %d%%\n", percent);
        printf("%.2f", promo1);
    } else {
        printf("Buy 2 Get 1\n");
        printf("%.2f", promo2);
    }
}