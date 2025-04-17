#include <stdio.h>

int main(){
    int x=5;
    if(x<1);//here the statement is ended, therefore the next statement will not be a part of the if statement
    printf("Hello");
    return 0;
}

#include <stdio.h>

int main(){
    float x=2.3;
    if (x==2.300000){
        printf("Hi");

    } else {
        printf("Hello");// because the actual value is 2.30000 so the conditon will got to else statemnet not in if statememnt as for if the value should be 2.3 
    }
    return 0;
}