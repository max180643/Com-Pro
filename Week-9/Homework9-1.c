#include <stdio.h>

void swap(double *a, double *b);

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  swap(&a, &b);
  swap(&a, &c);
  printf("%.2f %.2f %.2f", a, b ,c);
}

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}