// #include<stdio.h>
// int main()
// {
// 	char x[100];
// 	int i=0;
// 	printf("\n Enter the string:");
// 	fgets(x, 100, stdin);
// 	while(x[i]!='\0')
// 	{
//       if(x[i]==' ')
//       {
//       	x[i]='$';//Character replacement
//       }
//       i++;
//     }
//   printf("\n String after character replacement is:%s",x);
//   return 0;
// }

#include<stdio.h>
int main()
{
	int i,n,fact=1;
	int *pn,*pfact;
	pn=&n;
	pfact=&fact;
	printf("\n Enter number:");
	scanf("%d",pn);
	for(i=1;i<=*pn;i++)
	{
		*pfact=*pfact*i;
	}
	printf("\n Factorial of number is:%d",*pfact);
	return 0;
}