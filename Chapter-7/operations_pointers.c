// // Following operations can be performed on a pointer:
// // 1. Addition of a number to a pointer.
// // 2. Subtraction of a number from a pointer.
// // 3. Subtraction of one pointer from another.
// // 4. Comparison of two pointer variables.
// // Quick Quiz: Try these operations on another variable by creating pointers in a separate
// // program. Demonstrate all the four operations.


// #include <stdio.h>

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *ptr1 = arr;
//     int *ptr2 = &arr[3];

//     // Addition of a number to a pointer
//     printf("ptr1 + 2 = %p\n", (ptr1 + 2));

//     // Subtraction of a number from a pointer
//     printf("ptr2 - 2 = %p\n", (ptr2 - 2));

//     // Subtraction of one pointer from another
//     printf("ptr2 - ptr1 = %ld\n", (ptr2 - ptr1));

//     // Comparison of two pointer variables
//     if (ptr1 < ptr2) {
//         printf("ptr1 is less than ptr2\n");
//     } else if (ptr1 > ptr2) {
//         printf("ptr1 is greater than ptr2\n");
//     } else {
//         printf("ptr1 is equal to ptr2\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main(){
    int a,b,c,d, total, agg;
    printf("Enter the marks of the 4 Students: ");
    scanf("%d %d %d %d",  &a, &b, &c, &d);
    total= a+b+c+d;
    agg = total/4;
    if (agg >= 90 && agg <=100 ){
        printf("A GRADE");
    }
    else if(agg >= 80 && agg <=90 ){
        printf("B GRADE");
    }
    else if(agg >= 70 && agg <=80 ){
        printf("C GRADE");
    }
    else if(agg >= 40 && agg <=70 ){
        printf("D GRADE");
    } else {
        printf("E grade");
    }
    return 0;





    
    double income, tax;
    printf("\nEnter your income: ");
    scanf("%lf", &income);

    if (income <= 150000) {
        tax = 0;
    } else if (income <= 300000) {
        tax = 0.10 * (income - 150000);
    } else if (income <= 500000) {
        tax = 0.10 * 150000 + 0.20 * (income - 300000);
    } else {
        tax = 0.10 * 150000 + 0.20 * 200000 + 0.30 * (income - 500000);
    }

    printf("The calculated tax is: %.2lf\n", tax);
}