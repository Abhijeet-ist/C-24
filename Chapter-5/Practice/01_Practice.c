// Write a program using function to find average of three numbers.
#include <stdio.h>
double avg(double num1, double num2, double num3){
    return (num1+num2+num3)/3;
}

int main(){
    double a,b,c,d;
    printf("Enter 3 numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d=avg(a, b, c);
    printf("The average of these 3 numbers is: %lf",d);

    return 0;
}
