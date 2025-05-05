#include <stdio.h>
int main()
{
 char  name[]="Hello  World"; //string char array
 int i=0;
 while(name[i]!='\0') //untill null character
  {           
   printf("%c\n", name[i]);
   i++;
  }//end while
}//