#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void square();
void cube();
void squareRoot();
void logarithm();
void sine();
void cosine();
void tangent();

int main() {
    printf("\n****** SCIENTIFIC CALCULATOR ******\n");
    
    int choice;
    int continueCalc = 1;
    
    while (continueCalc) {
        printf("\nSelect operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Factorial\n");
        printf("8. Square\n");
        printf("9. Cube\n");
        printf("10. Square Root\n");
        printf("11. Logarithm (base 10)\n");
        printf("12. Sine (in radians)\n");
        printf("13. Cosine (in radians)\n");
        printf("14. Tangent (in radians)\n");
        printf("0. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addition();
                break;
                
            case 2:
                subtraction();
                break;
                
            case 3:
                multiplication();
                break;
                
            case 4:
                division();
                break;
                
            case 5:
                modulus();
                break;
                
            case 6:
                power();
                break;
                
            case 7:
                factorial();
                break;
                
            case 8:
                square();
                break;
                
            case 9:
                cube();
                break;
                
            case 10:
                squareRoot();
                break;
                
            case 11:
                logarithm();
                break;
                
            case 12:
                sine();
                break;
                
            case 13:
                cosine();
                break;
                
            case 14:
                tangent();
                break;
                
            case 0:
                printf("Thank you for using the calculator. Goodbye!\n");
                continueCalc = 0;
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}

void addition() {
    int n, sum = 0, i, num;
    
    printf("How many numbers you want to add: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    
    printf("Sum = %d\n", sum);
}

void subtraction() {
    int num1, num2, result;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    result = num1 - num2;
    
    printf("Difference = %d\n", result);
}

void multiplication() {
    int n, i;
    double result = 1.0, num;
    
    printf("How many numbers you want to multiply: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%lf", &num);
        result *= num;
    }
    
    printf("Product = %.2lf\n", result);
}

void division() {
    double num1, num2, result;
    
    printf("Enter dividend: ");
    scanf("%lf", &num1);
    printf("Enter divisor: ");
    scanf("%lf", &num2);
    
    if(num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        printf("Quotient = %.2lf\n", result);
    }
}

void modulus() {
    int num1, num2, result;
    
    printf("Enter dividend: ");
    scanf("%d", &num1);
    printf("Enter divisor: ");
    scanf("%d", &num2);
    
    if(num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        result = num1 % num2;
        printf("Remainder = %d\n", result);
    }
}

void power() {
    double base, exponent, result;
    
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);
    
    result = pow(base, exponent);
    
    printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, result);
}

void factorial() {
    int n, i;
    unsigned long long fact = 1;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    
    if(n < 0) {
        printf("Error! Factorial of negative number doesn't exist.\n");
    } else {
        for(i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%d! = %llu\n", n, fact);
    }
}

void square() {
    double num, result;
    
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    result = num * num;
    
    printf("Square of %.2lf = %.2lf\n", num, result);
}

void cube() {
    double num, result;
    
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    result = num * num * num;
    
    printf("Cube of %.2lf = %.2lf\n", num, result);
}

void squareRoot() {
    double num, result;
    
    printf("Enter a non-negative number: ");
    scanf("%lf", &num);
    
    if(num < 0) {
        printf("Error! Square root of negative number is not a real number.\n");
    } else {
        result = sqrt(num);
        printf("Square root of %.2lf = %.2lf\n", num, result);
    }
}

void logarithm() {
    double num, result;
    
    printf("Enter a positive number: ");
    scanf("%lf", &num);
    
    if(num <= 0) {
        printf("Error! Logarithm of non-positive number is not defined.\n");
    } else {
        result = log10(num);
        printf("Logarithm (base 10) of %.2lf = %.2lf\n", num, result);
    }
}

void sine() {
    double angle, result;
    
    printf("Enter angle in radians: ");
    scanf("%lf", &angle);
    
    result = sin(angle);
    
    printf("sin(%.2lf) = %.2lf\n", angle, result);
}

void cosine() {
    double angle, result;
    
    printf("Enter angle in radians: ");
    scanf("%lf", &angle);
    
    result = cos(angle);
    
    printf("cos(%.2lf) = %.2lf\n", angle, result);
}

void tangent() {
    double angle, result;
    
    printf("Enter angle in radians: ");
    scanf("%lf", &angle);
    
    if(cos(angle) == 0) {
        printf("Error! Tangent is undefined at this angle.\n");
    } else {
        result = tan(angle);
        printf("tan(%.2lf) = %.2lf\n", angle, result);
    }
}