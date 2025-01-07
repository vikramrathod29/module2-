//Write a C program that defines a structure to store a student's details (name,
//roll number, and marks). Use an array of structures to store details of 3
//students and print them
#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
     struct Student students[3];
    
     for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d\n", i + 1);
        
 
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';         
        
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        
        
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        
    
        getchar();  
        printf("\n");
    }
    
    
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    
    return 0;
}

