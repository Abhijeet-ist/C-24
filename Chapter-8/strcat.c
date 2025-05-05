#include <stdio.h>
#include <string.h>

int main(){
    char st[]="Abhi ";
    char a1[56]= "Bhai";
    strcat(st,a1);
    printf("%s", st);
    return 0;
}