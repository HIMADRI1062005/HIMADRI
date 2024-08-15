#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber, result;


    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch (operator) {
        case '+':
            result = firstNumber + secondNumber;
            printf("%.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;

        case '-':
            result = firstNumber - secondNumber;
            printf("%.2lf - %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;

        case '*':
            result = firstNumber * secondNumber;
            printf("%.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;

        case '/':
            if (secondNumber != 0.0) {
                result = firstNumber / secondNumber;
                printf("%.2lf / %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}
