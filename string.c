// #include <stdio.h>
// #include <string.h>

// void sortString(char *str) {
//     int n = strlen(str);
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (str[i] > str[j]) {
//                 char temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
//     }
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     sortString(str);

//     printf("Sorted string: %s\n", str);
//     return 0;
// }



// int factorial(int n) {
//     // Base case
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     // Recursive case
//     return n * factorial(n - 1);
// }

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    
    return 0;
}