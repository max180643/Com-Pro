#include <stdio.h>
int main() {
    int number, count = 1;
    scanf("%d", &number);
    while (count <= number) {
        printf("%d ", count);
        count++;
    }
    return 0;
}