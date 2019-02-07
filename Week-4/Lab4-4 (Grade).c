#include <stdio.h>
int main() {
    float number;
    scanf("%f", &number);
    if (number >= 80 && number <= 100) {
        printf("A");
    } else if (number >= 70 && number < 80) {
        printf("B");
    } else if (number >= 60 && number < 70) {
        printf("C");
    } else if (number >= 50 && number < 60) {
        printf("D");
    } else if (number >= 0 && number < 50) {
        printf("F");
    } else {
        printf("Out of Range");
    }
    return 0;
}