//Write a C program that calculates the factorial of a number using a function. Include function declaration, definition,
// and call.

#include <stdio.h>

int factorial(int n);

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
        printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

