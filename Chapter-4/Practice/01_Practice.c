// Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     printf("%d X %d = %d\n", n,i,n*i); 
    }
    return 0;
}