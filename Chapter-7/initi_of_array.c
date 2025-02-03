#include <stdio.h>

int main(){
    int cgpa[] = {9, 8, 8};//we can also use cgpa[3] both ways are correct
      for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}