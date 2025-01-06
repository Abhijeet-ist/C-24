// Write a program to print ‘n’ natural numbers in reverse order.
#include <stdio.h>

int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        printf("The value of I is: %d\n",i);
    }
    return 0;
}