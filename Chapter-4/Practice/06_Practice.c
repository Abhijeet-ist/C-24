// Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).

#include <stdio.h>

int main(){
    int n=8,i,product;
    for (i=1;i<=8;i++){
        product+=n*i;
    }
    printf("The sum of the numbers occurring in the multiplication table of 8: %d",product);

    return 0;
}