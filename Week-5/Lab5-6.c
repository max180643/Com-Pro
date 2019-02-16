#include <stdio.h>
int main() {
    int total;
    double max, min, number, average = 0;
    scanf("%d", &total);
    for (int i = 1; i <= total; i++) {
        scanf("%lf", &number);
        if (i == 1) {
            max = number;
            min = number;
        } else if (number > max) {
            max = number;
        } else if (number < min) {
            min = number;
        }
        average += number;
    }
    printf("%d Values\n", total);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.2f\n", average / total);
    return 0;
}