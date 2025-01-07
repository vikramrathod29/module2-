//Write a C program that takes a string as input and reverses it using a function.
//? Challenge: Write the program without using built-in string handling functions
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

   
    while (str[length] != '\0') {
        length++;
    }

 
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

