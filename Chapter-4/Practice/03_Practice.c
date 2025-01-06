// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main(){
    int sum = 0;
    int i = 1;
    while(i <= 10){
        sum += i;
        i++;
    }
    printf("Sum of first ten natural numbers: %d\n", sum);

    return 0;
}