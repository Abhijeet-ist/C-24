#include <stdio.h>
#include <string.h>

int main(){
    char st[]="Abhijeet";
    printf("%d\n", strlen(st));
    // return 0;

    char source[]="Abhi";
    char target[30];
    strcpy(target, source);
    printf("%s %s", source, target);
    return 0;

}


// #include<stdio.h>
// struct employees{
//     char name[20];
//     int rollno;
//     float salary;
// };
// int main(){
//     struct employees e1={"Smith"};
//     printf("%f",e1.salary);
//     return 0;
// }