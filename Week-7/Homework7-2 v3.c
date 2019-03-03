#include <stdio.h>

char c1, c2;
void fibbonacci(int pos);

int main() {
    int pos;
    scanf("%c %c %d", &c1, &c2, &pos);
    fibbonacci(pos);
}

void fibbonacci(int pos){
    if (pos == 1) printf("%c", c1);
    else if (pos == 2) printf("%c", c2);
    else {
        fibbonacci(pos - 2);
        fibbonacci(pos - 1);
    }
}
