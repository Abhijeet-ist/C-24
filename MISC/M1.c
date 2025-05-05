// Write a function that reverses a string in-place.

#include <stdio.h>
#include <string.h>

void string_rev(char *str){
    int i, j;
    int len = strlen(str);
    char temp;

    for (i=0, j=len-1; i<j; i++ , j-- ){
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", &str);

    printf("The original string is : %s\n", str);
    string_rev(str);
    printf("The reversed string is : %s\n",str);
}