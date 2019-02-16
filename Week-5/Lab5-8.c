#include <stdio.h>
int main() {
    int age, age_avg, con1 = 0, con2 = 0, con3 = 0, con4 = 0;
    float height, height_avg, weight, weight_avg;
    for (int i = 0; i < 50; i++) {
        scanf("%d %f %f", &age, &height, &weight);
        if (age >= 20 && height >= 160) { con1 += 1; }
        if (age < 20 && (height <= 180 || weight >= 60)) { con2 += 1; }
        if (age >= 30 && (weight >= 40 && weight <= 80)) { con3 += 1; }
        if (age < 40 && (weight < 85 || height <= 200)) { con4 += 1; }
        age_avg += age;
        height_avg += height;
        weight_avg += weight;
    }
    printf("Age >= 20 and Height >= 160: %d\n", con1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", con2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", con3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", con4);
    printf("Average Age: %d\n", age_avg / 50);
    printf("Average Height: %.2f\n", height_avg / 50);
    printf("Average Weight: %.2f", weight_avg / 50);
    return 0;
}