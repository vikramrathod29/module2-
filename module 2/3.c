#include <stdio.h>

int main() {
    // Declaring variables for user input
    int num1, num2;

    // Accepting two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Performing arithmetic operations
    printf("\nArithmetic Operations:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %.2f\n", num1, num2,(float)num1 / num2);
    printf("%d %% %d = %d\n", num1, num2,  num1 % num2);

    // Performing relational operations
    printf("\nRelational Operations:\n");
    printf("%d == %d: %s\n", num1, num2, (num1 == num2) ? "true" : "false");
    printf("%d != %d: %s\n", num1, num2, (num1 != num2) ? "true" : "false");
    printf("%d > %d: %s\n", num1, num2, (num1 > num2) ? "true" : "false");
    printf("%d < %d: %s\n", num1, num2, (num1 < num2) ? "true" : "false");
    printf("%d >= %d: %s\n", num1, num2, (num1 >= num2) ? "true" : "false");
    printf("%d <= %d: %s\n", num1, num2, (num1 <= num2) ? "true" : "false");

    // Performing logical operations
    printf("\nLogical Operations:\n");
    printf("(%d > 0 && %d > 0): %s\n", num1, num2, (num1 > 0 && num2 > 0) ? "true" : "false");
    printf("(%d > 0 || %d > 0): %s\n", num1, num2, (num1 > 0 || num2 > 0) ? "true" : "false");
    printf("!(%d > 0): %s\n", num1, !(num1 > 0) ? "true" : "false");

    return 0;
}

