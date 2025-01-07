//Write a C program to check if a number is even or odd using an if-else
//statement. Extend the program using a switch statement to display the month
//name based on the user�s input (1 for January, 2 for February, etc.).
#include <stdio.h>

int main() {
   
    int number, month;
    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    printf("\nEnter a number (1-12) to display the corresponding month: ");
    scanf("%d", &month);

    switch (month) {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("May\n"); break;
        case 6: printf("June\n"); break;
        case 7: printf("July\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

