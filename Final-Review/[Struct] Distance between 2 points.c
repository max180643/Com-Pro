#include <stdio.h>
#include <math.h>

double calculateDistance(double x1, double y1, double x2, double y2);

int main() {
    struct distant {
        double x;
        double y;
    } p1, p2;
    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);
    printf("Distance between two points (x1,y1) and (x2,y2) : %.2f", calculateDistance(p1.x, p1.y, p2.x, p2.y));
}

double calculateDistance(double x1, double y1, double x2, double y2) {
    double distant = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return distant;
}