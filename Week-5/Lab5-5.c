#include <stdio.h>
int main() {
    int number, check = 1;
    while (check == 1) {
        scanf("%d", &number);
        if (number % 2 == 0 && number < 2) {
            printf("error\n");
        } else if (number % 2 == 0) {
            for (int i = 1; i <= (number / 2); i++) {
                printf("%d", i);
            }
            for (int j = number / 2; j >= 1; j--) {
                printf("%d", j);
            }
            check = 0;
        } else {
            printf("error\n");
        }
    }
    return 0;
}