//Write a C program that takes the marks of a student as input and displays the corresponding
//grade based on the following conditions:
//o Marks > 90: Grade A
//o Marks > 75 and <= 90: Grade B
//o Marks > 50 and <= 75: Grade C
//o Marks <= 50: Grade D
//? Use if-else orswitch statements for the decision-making process.
#include <stdio.h>

int main() {
    int marks;

    // Prompt the user to enter marks
    printf("Enter the marks of the student (0-100): ");
    scanf("%d", &marks);

    // Check the grade using if-else
    if (marks > 90) {
        printf("Grade: A\n");
    } else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    } else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    } else if (marks <= 50 && marks >= 0) {
        printf("Grade: D\n");
    } else {
        printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
    }

    return 0;
}

