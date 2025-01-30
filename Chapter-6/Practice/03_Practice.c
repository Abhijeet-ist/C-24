// Write a program to change the value of a variable to ten times of its current
// value

#include <stdio.h>
int time10(int );

int time10(int x){
    return 10*x;
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf(" 10 Times of %d is %d.", a, time10(a));
    return 0;
}