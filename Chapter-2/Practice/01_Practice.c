// Write a program to check wether a number is divisible by 97.
#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The value of a%%97 is %d", a%97);
    return 0;
}

// note: modulus operator % is not defined for floating-point numbers. You need to change the type of a to an integer.