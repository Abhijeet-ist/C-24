// Write a program to calculate the factorial of a given number using a while loop.

#include <stdio.h>

int main(){
    int n,fact=1,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (i<=n){
        fact *=i;
        i++;
    }
    printf("Factoria of %d is: %d", n, fact)
    return 0;
}