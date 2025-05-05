#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Hello";//Array of Character
	char str1[6]="Hello";
	char str2[6]={'H','e','l','l','o','\0'};
	char str5[4]={{'B'},{'Y'},{'E'},{'\0'}};
	char *str3="Hello";//Character pointer
	char *abc;
	abc="Hello World";// For character pointer it is allowed
	//abc=str;//It will work
	char str4[5];
	//str4="Hello";//Not allowed in C
	int x;
	printf("str is %s",str);//Value of str
	printf("\nstr1 is %s",str1);//value of str1
	printf("\nstr2 is %s",str2);//Value of str2
	printf("\nstr3 is %s",str3);//Value of str3
	printf("\nstr5 is %s",str5);
	printf("\nBase address of str string is:%u",str);//Base address of str
	printf("\nAddress of first character of abc string is:%u",abc);//Address of first character
	abc++;//Pointer incremented by 1
	printf("\nAddress of second character of abc string is:%u",abc);//Address of second character
	x=strlen(str);
	printf("\n%d is the length of str",x);//In calculating length null character is not counted
	printf("\nSize of str is:%d",sizeof(str));//In displaying total number of bytes null character is calculated
	printf("\nSize of abc is:%d",sizeof(abc));//size will be 8 for pointer variable
	return 0;
}