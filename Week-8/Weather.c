#include <stdio.h>
#include <string.h>
 
struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};
 
void playing_decsion(struct Weather data);
 
int main() {
    struct Weather data;
    playing_decsion(data);
}
 
void playing_decsion(struct Weather data) {
    int number;
    scanf("%d", &number);
    struct Weather check[number];
    for (int i = 0; i < number; i++) {
        scanf("%s %d %d %c", check[i].outlook, &check[i].temperature, &check[i].humidity, &check[i].wind);
    }
    for (int i = 0; i < number; i++) {
        if (strcmp(check[i].outlook, "overcast") == 0) {
            printf("yes\n");
        }
        else if (strcmp(check[i].outlook, "rain") == 0) {
            if (check[i].wind == 'F')
                printf("yes\n");
            else
                printf("no\n");
        }
        else if (strcmp(check[i].outlook, "sunny") == 0) {
            if (check[i].humidity > 77)
                printf("no\n");
            else
                printf("yes\n");
        }
    }
}