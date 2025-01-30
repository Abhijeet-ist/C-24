// Write a program to print the address of a variable. Use this address to get the
// value of the variable

#include <stdio.h>


int main(){
    int x=10;
    int *j=&x;
    printf("Address of x is: %d\n",&x);
    int y= *(&x);
    printf("The value at x is: %d", *j);
    return 0;
}