#include <stdio.h>

double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main() {
    int n;
    scanf("%d", &n);
    
    double array[n];
    for (int i=0; i<n; i++) {
        array[i] = getValue();
    }

    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);

    printf("%d Values\n", n);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.3f", avg);
}

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
    double value = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] < value) {
            value = array[i];
        }
    }
    return value;
}

double findMax(double array[], int size) {
    double value = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] > value) {
            value = array[i];
        }
    }
    return value;
}

double findAvg(double array[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total / size;
}