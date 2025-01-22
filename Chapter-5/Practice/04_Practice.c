// Write a program using recursion to calculate nth element of Fibonacci series

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Enter the position of the Fibonacci series: ");
    scanf("%d", &n);
    printf("The %dth element of the Fibonacci series is: %d\n", n, fibonacci(n));
    return 0;
}