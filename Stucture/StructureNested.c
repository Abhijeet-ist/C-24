#include <stdio.h>
struct Address
{
    char Housename[25];
    char City[25];
    char Streetname[25];
};
struct Employee
{
    int Id;
    char Name[25];
    float Salary;
    struct Address Add;
};
int main()
{
    struct Employee E;
    printf("\n\tEnter Employee Id : ");
    scanf("%d", &E.Id);
    printf("\n\tEnter Employee Name : ");
    scanf("%s", E.Name);
    printf("\n\tEnter Employee Salary : ");
    scanf("%f", &E.Salary);
    printf("\n\tEnter Employee House Name : ");
    scanf("%s", E.Add.Housename);
    printf("\n\tEnter Employee City : ");
    scanf("%s", E.Add.City);
    printf("\n\tEnter Employee street name : ");
    scanf("%s", E.Add.Streetname);
    printf("\nDetails of Employees");
    printf("\n\tEmployee Id : %d", E.Id);
    printf("\n\tEmployee Name : %s", E.Name);
    printf("\n\tEmployee Salary : %f", E.Salary);
    printf("\n\tEmployee House No : %s", E.Add.Housename);
    printf("\n\tEmployee City : %s", E.Add.City);
    printf("\n\tEmployee street name: %s", E.Add.Streetname);
}
