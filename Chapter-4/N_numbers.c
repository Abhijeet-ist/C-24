// Write a program to print first ‘n’ natural number using do-while loop.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1;
    do{
        printf("The value of I is: %d\n",i);
        i++;
    } while(i<=n);
    return 0;
}

