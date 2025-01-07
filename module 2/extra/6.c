//Write a C program that takes an integer input from the user and prints its multiplication table using a for loop.
//? Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N)
#include <stdio.h>

int main() {
    int number, start, end;

    printf("Enter an integer: ");
    scanf("%d", &number);


    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);

    printf("Multiplication table for %d from %d to %d:\n", number, start, end);

     for (int i = start; i <= end; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

