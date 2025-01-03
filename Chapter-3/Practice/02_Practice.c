/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>

int main(){
    printf("Total marks is 300\nPer subject marks is 100\n");
    float marks1,marks2,marks3;
    printf("Enter your marks-1:\n");
    scanf("%f",&marks1);
    printf("Enter your marks-2:\n");
    scanf("%f",&marks2);
    printf("Enter your marks-3:\n");
    scanf("%f",&marks3);
    float total_m=marks1+marks2+marks3;
    float pass= 120;
    int pass_sub=33;
    if (total_m >= pass && marks1 >= pass_sub && marks2 >= pass_sub && marks3 >= pass_sub) {
        printf("You are Passed");
    }
    else if (total_m >= pass && (marks1 < pass_sub || marks2 < pass_sub || marks3 < pass_sub)) {
        printf("You Failed because you didn't qualify the passing criteria in each subject");
    }
    else {
        printf("You Failed because you didn't qualify the passing criteria in overall score");
    }
    return 0;
}


