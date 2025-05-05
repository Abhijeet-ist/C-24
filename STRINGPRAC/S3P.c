#include<stdio.h>
int main()
{
	char x[100];
	int i=0;
	printf("\n Enter the string:");
	fgets(x, 100, stdin);
	while(x[i]!='\0')
	{
      if(x[i]==' ')
      {
      	x[i]='$';//Character replacement
      }
      i++;
    }
  printf("\n String after character replacement is:%s",x);
  return 0;
}