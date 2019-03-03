#include <stdio.h>

int coincharge(int coins[], int remain);

int main() {
    int total;
    int coins[] = {1, 2, 5, 10};
    scanf("%d", &total);
    printf("method = %d", coincharge(coins, total));
}

int coincharge(int coins[], int remain) {
    int way = 0;
    if (remain == 0) return 1;
    else if (remain < 1) return 0;
    for (int i = 0; i < 4; i++) {
        way += coincharge(coins, remain - coins[i]);
    }
    return way;
}