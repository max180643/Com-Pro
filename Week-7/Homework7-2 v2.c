#include <stdio.h>

void fibbonacci(char c1, char c2, int pos);

int main() {
    char c1, c2;
    int pos;
    scanf("%c %c %d", &c1, &c2, &pos);
    fibbonacci(c1, c2, pos);
}

void fibbonacci(char c1, char c2, int pos) {
    if (pos == 1) {
        printf("%c", c1);
    } else if (pos == 2) {
        printf("%c", c2);
    } else {
        fibbonacci(c1, c2, pos - 2);
        fibbonacci(c1, c2, pos - 1);
    }
}