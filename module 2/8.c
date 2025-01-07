//Write a C program that stores 5 integers in a one-dimensional array and prints
//them. Extend this to handle a two-dimensional array (3x3 matrix) and
//calculate the sum of all elements
#include <stdio.h>

int main() {
    int one_dimensional_array[5];
    
    printf("Enter 5 integers for the one-dimensional array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &one_dimensional_array[i]);
    }
    printf("\nThe elements of the one-dimensional array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", one_dimensional_array[i]);
    }
    printf("\n");

    int two_dimensional_array[3][3];
    int sum = 0;

    printf("\nEnter 9 integers for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &two_dimensional_array[i][j]);
        }
    }
    printf("\nThe elements of the 3x3 matrix are:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", two_dimensional_array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += two_dimensional_array[i][j];
        }
    }

    printf("\nThe sum of all elements in the 3x3 matrix is: %d\n", sum);

    return 0;
}

