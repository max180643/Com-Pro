#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (m > n) {
        for (int i = m; i >= n; i--) {
        printf("%d ", i);
        }
    } else if (n > m) {
        for (int j = m; j <= n; j++) {
        printf("%d ", j);
        }
    }
    return 0;
}