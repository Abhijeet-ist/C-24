// Write a program to sum first ten natural numbers using while loop using do while loop.
#include <stdio.h>

int main(){
    int sum=0,i=1;
    do{
        sum+=i;
        i++;
    } while (i<=10);
    printf("The sum of first 10 natural numbers: %d", sum);
    return 0;
}