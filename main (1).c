#include <stdio.h>

int main() {
    float num1, num2;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Performing operations
    printf("\n--- Results ---\n");
    printf("Addition: %.2f\n", num1 + num2);
    printf("Subtraction: %.2f\n", num1 - num2);
    printf("Multiplication: %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %.2f\n", num1 / num2);
    } else {
        printf("Division: Error! Cannot divide by zero.\n");
    }

    return 0;
}

