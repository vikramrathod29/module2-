//Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).
#include <stdio.h>

int main() {
    int i;

    // Using a for loop
    printf("Numbers from 1 to 10 using a for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a while loop
    printf("Numbers from 1 to 10 using a while loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Using a do-while loop
    printf("Numbers from 1 to 10 using a do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");

    return 0;
}

