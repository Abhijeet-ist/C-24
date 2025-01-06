// Write a program to calculate the factorial of a given number using a for loop.

// Program 1
 #include <stdio.h>
 
 int main(){
    int n,i,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n==1 || n==0) {
        printf("Factorial of %d is 1",n);
    }
    else{
        for (i=1;i<=n;i++){
            fact*=i;
        }
    }printf("%d",fact);
    return 0;
 }


// Program 2
#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    int product=1;
    int n = 0;
    for (int i = 1; i <= n; i++)
    {
        product *=i;
    }
    printf("The factorial is %d", product);
    return 0;
}