//Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
//153 = 1^3 + 5^3 + 3^3).
//? Challenge: Write a program to find all Armstrong numbers between 1 and 1000.


#include <stdio.h>
#include <math.h>


int isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = 0;

    while (number != 0) {
        number /= 10;
        digits++;
    }

    number = originalNumber;


    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, digits);
        number /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int number;

    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    printf("Armstrong numbers between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

