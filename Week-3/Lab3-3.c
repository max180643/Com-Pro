#include <stdio.h>
int main() {
    unsigned long long int input;
    int day, hour, minute,second;
    scanf("%llu", &input);
    day = input / 86400;
    hour = (input - (day * 86400)) / 3600;
    minute = (input - (day * 86400) - (hour * 3600)) / 60;
    second = input - (day * 86400) - (hour * 3600) - (minute * 60);
    printf("%llu s = %d d %d h %d m %d s", input, day, hour, minute, second);
    return 0;
}