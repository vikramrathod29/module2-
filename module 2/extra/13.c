//Write a C program that takes a number as input and checks whether it is a palindrome using a function.
//? Challenge: Modify the program to check if a given string is a palindrome.
#include <stdio.h>

int main() {
    int number, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

