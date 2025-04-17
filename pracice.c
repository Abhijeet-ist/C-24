// #include <stdio.h>

// void printNumbers(int n) {
//     if (n > 10) {
//         return;
//     }
//     printf("%d\n", n);
//     printNumbers(n + 1);
// }

// int main() {
//     printNumbers(1);
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int n=1234, sum=0, rem;
//     while (n>0){
//         rem = n%10;
//         n=n/10;
//         sum = sum + rem;
//     }

//     printf("%d", sum);
//     return 0;
// }


#include <stdio.h>

void factorial(int n, unsigned long long *result) {
    *result = 1;
    for (int i = 1; i <= n; i++) {
        *result *= i;
    }
}

int main() {
    int number;
    unsigned long long result;
    
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorial(number, &result);
        printf("Factorial of %d is %llu\n", number, result);
    }
    
    return 0;
}