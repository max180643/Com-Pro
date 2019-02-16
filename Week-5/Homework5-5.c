#include <stdio.h>
int main() {
    int number = 1, temp = 1, total = 0;
    while(number != 0){
        scanf("%d", &number);
        if (number == 0) { break; }
        total += temp % number;
        temp = number;
    }
    printf("%d", total);
    return 0;
}