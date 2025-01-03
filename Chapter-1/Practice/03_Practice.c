// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).


#include <stdio.h>

int main(){
    float c;
    printf("Enter Temperature in Celsius: ");
    scanf("%f",&c);
    float f=((9.0/5.0)*c)+32;
    printf("Temperature in Fahrenheit is: %f", f);
    return 0;
}