//Write a C program that checks whether a given number is a prime number or not using a for loop.
//? Challenge: Modify the program to print all prime numbers between 1 and a given number.
#include <stdio.h>

int main() {
    int number, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
        return 0;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0; 
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

