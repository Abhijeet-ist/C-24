// Find wether the year is a leap year or not.
#include <stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year%400==0){
        printf("Leap Year");
    }
    else if(year%100==0){
        printf("Not a Leap Year");
    }
    else if(year%4==0){
        printf("Leap Year");
    }
    return 0;
}