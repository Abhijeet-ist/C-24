// Write a function to convert Celsius temperature into Fahrenheit.
// (0°C × 9/5) + 32 = 32°F

#include <stdio.h>

float temp(float a){
    float x;
    x = (a * 9.0/5.0) + 32;
    return x;
}

int main(){
    float n, result;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &n);
    result = temp(n);
    printf("%.2f degree celcius in Fahrenheit is: %.2f\n", n, result);
    return 0;
}