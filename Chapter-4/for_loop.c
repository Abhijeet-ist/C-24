// Write a program to print first ‘n’ natural numbers using for loop

#include <stdio.h>

int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("The value of I is: %d\n",i);
    }
    return 0;
}