#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather wt_param[], int n);

int main() {
    int number;
    scanf("%d", &number);
    struct Weather data[number];
    playing_decision(data, number);
    return 0;
}

void playing_decision(struct Weather wt_param[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %c", wt_param[i].outlook, &wt_param[i].temperature, &wt_param[i].humidity, &wt_param[i].wind);
    }
    for (int i = 0; i < n; i++) {
        if (strcmp(wt_param[i].outlook, "overcast") == 0) {
            printf("yes\n");
        }
        else if (strcmp(wt_param[i].outlook, "rain") == 0) {
            if (wt_param[i].wind == 'F')
                printf("yes\n");
            else
                printf("no\n");
        }
        else if (strcmp(wt_param[i].outlook, "sunny") == 0) {
            if (wt_param[i].humidity > 77)
                printf("no\n");
            else
                printf("yes\n");
        }
    }
}