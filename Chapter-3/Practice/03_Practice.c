#include <stdio.h>

int main() {
    float income, tax = 0.0;
    printf("Enter your income in Lakhs: ");
    scanf("%f", &income);

    if (income > 10.0) {
        tax = 0.30 * (income - 10.0) + 0.20 * 5.0 + 0.05 * 2.5;
    } else if (income > 5.0) {
        tax = 0.20 * (income - 5.0) + 0.05 * 2.5;
    } else if (income > 2.5) {
        tax = 0.05 * (income - 2.5);
    }

    if (tax > 0) {
        printf("You have to pay tax of your income.\nThe tax is: %f", tax);
    } else {
        printf("There is no tax below 2.5L income");
    }

    return 0;
}
