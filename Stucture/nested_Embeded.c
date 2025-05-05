#include <stdio.h>
struct Employee
{
   char ename[20];
   int ssn;
   float salary;
   struct dob
       {
       int date;
       int month;
       int year; 
       }db1;
}emp = {"Aniket",1000,1000.50,{22,6,1990}};

int main()
{
printf("\nEmployee Name   : %s",emp.ename);  
printf("\nEmployee SSN    : %d",emp.ssn);  
printf("\nEmployee Salary : %.2f",emp.salary);  
printf("\nEmployee DOB    : %d/%d/%d",emp.db1.date,emp.db1.month,emp.db1.year);  
    
return 0;
}
