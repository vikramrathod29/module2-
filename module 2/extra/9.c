//Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix.
//? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication
#include <stdio.h>

int main() {
    int choice, size;

    printf("Matrix Operations:\n");
    printf("1. Add two 2x2 matrices\n");
    printf("2. Add two 3x3 matrices\n");
    printf("3. Multiply two 3x3 matrices\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2) {
        size = (choice == 1) ? 2 : 3;

        int mat1[size][size], mat2[size][size], result[size][size];

        printf("\nEnter elements of the first %dx%d matrix:\n", size, size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("mat1[%d][%d]: ", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("\nEnter elements of the second %dx%d matrix:\n", size, size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("mat2[%d][%d]: ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }

        // Perform addition
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                result[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        printf("\nResultant matrix after addition:\n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    } else if (choice == 3) {
        size = 3;

        int mat1[size][size], mat2[size][size], result[size][size];

        printf("\nEnter elements of the first %dx%d matrix:\n", size, size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("mat1[%d][%d]: ", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("\nEnter elements of the second %dx%d matrix:\n", size, size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("mat2[%d][%d]: ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }

        // Initialize result matrix with zeros
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                result[i][j] = 0;
            }
        }

        // Perform multiplication
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int k = 0; k < size; k++) {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        printf("\nResultant matrix after multiplication:\n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

