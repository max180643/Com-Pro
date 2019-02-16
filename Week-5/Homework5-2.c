#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            if (i == j || (number - i - 1) == j) {
                printf("-");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}