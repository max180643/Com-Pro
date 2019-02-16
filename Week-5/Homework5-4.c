#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        for (int j = number - i; j >= 1; j--) {
            printf(" ");
        }
            for (int k = i > 1 ? i + (i - 1) : i; k >= 1; k--) {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}