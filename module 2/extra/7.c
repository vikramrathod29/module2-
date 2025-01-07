//? Write a C program that takes an integer from the user and calculates the sum of its digits
//using a while loop.
//? Challenge: Extend the program to reverse the digits of the number.
#include <stdio.h>

int main() {
    int n1, sum = 0, rev = 0, rem;
    
    printf("Enter The Number Of N1: ");
    scanf("%d", &n1);
    
    int temp = n1;      
    
    while (n1 != 0) {
        rem = n1 % 10;
        sum = sum + rem;
        n1 = n1 / 10;
    }
    
    printf("\nThe Sum of the Digits is: %d", sum);

    n1 = temp;  // Restore the original number for reversing
    
        while (n1 != 0) {
        rem = n1 % 10;
        rev = rev * 10 + rem;  
        n1 = n1 / 10;
    }

   
    printf("\nThe Reversed Number is: %d", rev);
    
    return 0;
}

