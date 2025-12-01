//
// Created by kiara on 01-12-2025.
//

#include "conversion.h"
using namespace std;

float fahrenheitToCelsius(float temp) {
    float celsius = (temp - 32)*(5/9);
    return celsius;
}

float celsiusToFahrenheit(float temp) {
    float farenheit = (temp * 9/5) + 32;
    return farenheit;
}

float inchesToCentimeters(float num) {
    float cm = num * 2.54;
    return cm;
}

float centimetersToInches(float num) {
    float inches = num/2.54;
    return inches;
}