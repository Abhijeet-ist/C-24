#include <stdio.h>

int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks >= 90 && marks <= 100){
        printf("Your grade is A\n");
    }
    else if(marks >= 80 && marks < 90){
        printf("Your grade is B\n");
    }
    else if(marks >= 70 && marks < 80){
        printf("Your grade is C\n");
    }
    else if(marks >= 60 && marks < 70){
        printf("Your grade is D\n");
    }
    else if(marks >= 50 && marks < 60){
        printf("Your grade is E\n");
    }
    else if(marks < 50){
        printf("Your grade is F\n");
    }
    else{
        printf("You entered invalid marks\n");
    }
    return 0;

}