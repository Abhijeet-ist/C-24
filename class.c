// #include <stdio.h>

// int main(){
//     double area=0.0, radius;
//     double *parea=&area, *pradius=&radius;
//     printf("Enter the radious of the circle: ");
//     scanf("%lf", pradius);
//     *parea=3.14 * (*pradius) * (*pradius);
//     printf("Area of the circle is : %.2lf", *parea );
//     return 0;
// }


//FACTORIAL OF NUMBER ;

// #include <stdio.h>

// int main(){
//     int n, i, fact=1;
//     int *pn = &n, *pfact=&fact;
//     printf("Enter a number: ");
//     scanf("%d", pn);
//     for (i=1; i<= *pn; i++){
//         *pfact = *pfact * i;
//     }
//     printf("THE FACTORIAL OF %d is : %d", *pn, *pfact);

//     return 0;
// }


//REVERSE OF A NUMBER ;

#include <stdio.h>

int main(){
    int n, remainder, reversed_number, s;
    int *pn=&n, *pr=&remainder, *prn=&reversed_number;
    printf("Enter an integer: ");
    scanf("%d", pn);
    while(*pn != 0)
    {
        *pr = *pn%10;
        *prn = *prn*10 + *pr;
        *pn = *pn/10;
    }
    printf("Reversed Number = %d",*prn);
    return 0;
}