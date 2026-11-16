#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf",
                   num1, num2,num1+num2);
            break;

        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf",
                  num1-num2);
            break;

        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf",
                   num1*num2);
            break;

        case '/':
            if (num2 != 0) {
                printf("Result: %.2lf / %.2lf = %.2lf",
                       num1/num2);
            } else {
                printf("Error: Division by zero is not allowed!");
            }
            break;

        default:
            printf("Invalid operator!");
            break;
    }

    return 0;
}
