#include <stdio.h>
int main() {
    int number, total = 0;
    while (1) {
        scanf("%d", &number);
        if (number == -9) { break; }
        total += number;
    }
    printf("%d", total);
    return 0;
}