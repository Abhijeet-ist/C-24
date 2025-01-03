// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

#include <stdio.h>

int main(){
    float p,r,t;
    printf("Enter the principle amount: ");
    scanf("%f",&p);
    printf("Enter the rate: ");
    scanf("%f",&r);
    printf("Enter the time period: ");
    scanf("%f",&t);
    float si=(p*r*t)/100;
    printf("Simple Intrest is: %f", si);
    return 0;
}