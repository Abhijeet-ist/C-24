// Write a program to store the details of 3 employees from user defined data.
// Use the structure declared above.

#include <stdio.h>
struct employees{
    char name[50];
    int id;
    float salary;
};



int main(){
    struct employees e1, e2, e3;

    printf("Enter the name of the employee:\n");
    scanf("%s", e1.name);

    printf("Enter the id of the employee:\n");
    scanf("%d", &e2.id);

    printf("Enter the salary of the employee:\n");
    scanf("%f", &e3.salary);

    printf("%s %d %f\n", e1.name, e2.id, e3.salary);




    printf("Enter the name of the employee:\n");
    scanf("%s", e2.name);

    printf("Enter the id of the employee:\n");
    scanf("%d", &e2.id);

    printf("Enter the salary of the employee:\n");
    scanf("%f", &e2.salary);

    printf("%s %d %f", e2.name, e2.id, e2.salary);
    return 0;
}