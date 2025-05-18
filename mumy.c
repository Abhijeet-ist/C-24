//Passing arguments to function using pointers
#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("\n Enter the first number:");
	scanf("%d",&a);
	printf("\n Enter the second number:");
	scanf("%d",&b);
	swap(&a,&b);
	printf("\n Values of a and b after swap are:%d,%d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	int *ptemp=&temp;
	*ptemp=*x;
	*x=*y;
	*y=*ptemp;
}