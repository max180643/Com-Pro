#include <stdio.h>
int main() {
    int power, p0, p1, combo = 1;
    char damage[21], temp;
    scanf("%d %s", &power, damage);
    p0 = power;
    p1 = power;
    for (int i = 0; damage[i] != '\0'; i++) {
        if ((int)damage[i] % 2 == 1) {
            p0 -= 1;
        } else if ((int)damage[i] % 2 == 0) {
            p1 -= 1;
        }
        if (temp == damage[i]) {
            combo++;
        } else {
            temp = damage[i];
            combo = 1;
        }
        if (combo == 3 && (int)damage[i] % 2 == 1) {
            p0 -= 3;
        } else if (combo == 3 && (int)damage[i] % 2 == 0) {
            p1 -= 3;
        }
    }
    if (p0 == p1) {
        printf("- %d %d", p0, p1);
    } else if (p0 > p1) {
        printf("0 %d %d", p0, p1);
    } else if (p0 < p1) {
        printf("1 %d %d", p0, p1);
    }
    return 0;
}