// Create a string using double quotes and print its content using a loop

#include <stdio.h>

int main(){
    char s[]= {'A','b','h','i','j','e','e','t','\0'};
    for (int i=0; i<=7; i++){
        printf("%c", s[i]);
    }
    return 0;
}