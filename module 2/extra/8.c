//Write a C program that accepts 10 integers from the user and stores them in an array. The
//program should then find and print the maximum and minimum values in the array.
//? Challenge: Extend the program to sort the array in ascending order.
#include <stdio.h>

int main() {
    int n1[10], max, min, i, j, temp;

    for (i = 0; i < 10; i++) {
        printf("Enter The Numerical Number Of N1[%d]:\t", i);
        scanf("%d", &n1[i]);
    }
    
    printf("\n\nDisplay The Maximum And Minimum Number:");
    max = n1[0];
    min = n1[0];
    for (i = 1; i < 10; i++) {
        if (n1[i] > max) {
            max = n1[i];
        }
        if (n1[i] < min) {
            min = n1[i];
        }
    }
    printf("\nThe Maximum Number Is: %d", max);
    printf("\nThe Minimum Number Is: %d", min);


    printf("\n\nDisplay The Ascending Order Number:");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) { 
            if (n1[i] > n1[j]) {
                temp = n1[i];
                n1[i] = n1[j];
                n1[j] = temp;
            }
        }
    }


    printf("\nAscending Numbers Are: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", n1[i]); 
    }

    return 0;
}

