#include <stdio.h>
int main() {
    int number, count = 1;
    scanf("%d", &number);
    do {
        printf("%d ", count);
        count++;
    } while (count <= number);
    return 0;
}