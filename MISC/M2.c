// Create a function to convert a string to uppercase or lowercase without using library functions.

#include <stdio.h>

void toUpper(char *str){
    int i = 0;
    while (str[i]!='\0'){
        if (str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        i++;
    }
}

void toLower(char *str){
    int i = 0;
    while (str[i]!='\0'){
        if (str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
        i++;
    }
}




int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    toUpper(str);
    printf("Upper string: %s\n", str);
    toLower(str);
    printf("Lower string: %s", str);
    return 0;
}
