#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is valid.");
    } else {
        printf("Triangle is not valid.");
    }
}