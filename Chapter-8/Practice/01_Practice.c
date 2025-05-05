// Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    
    for (int i = 0; i<5; i++ ){

        scanf("%c", &str[i]);
        fflush(stdin);
        
    }
    str[100]='\0';
    printf("%s", str);

    // char s[6];
    // scanf("%s", s);
    // printf("%s", s);

    return 0;
}