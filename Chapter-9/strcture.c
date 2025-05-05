#include<stdio.h>
struct employees{
    char name[20];
    int rollno;
    float salary;
};
int main(){
    struct employees e1={"Smith", 101, 50000.0};
    printf("%s %d %f",e1.name, e1.rollno, e1.salary);
    return 0;
}