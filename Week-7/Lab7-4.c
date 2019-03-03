#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
    double value;
    char unit;
    scanf("%lf %c", &value, &unit);
    if (unit == 'c' || unit == 'C') {
        printFarenheit(celsiusToFahrenheit(value));
    } else if (unit == 'f' || unit == 'F') {
        printCelcius(fahrenheitToCelcius(value));
    }
    return 0;
}

double celsiusToFahrenheit(double celcius){
    return 32 + celcius * (180.0/100.0);
}

double fahrenheitToCelcius(double fahrenheit){
    return (fahrenheit - 32) / (180.0/100.0);
}

void printFarenheit(double fahrenheit){
    printf("%.2f f", fahrenheit);
}

void printCelcius(double celcius){
    printf("%.2f c", celcius);
}