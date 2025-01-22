// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int sum(int a){
    if (a==1){
        return 1;
    }
    return sum(a-1)+a;
}
int main(){
    int n;
    printf("Enter any natural number: ");
    scanf("%d",&n);
    printf("Sum of %d natural numbers is: %d", n, sum(n));
    return 0;
}