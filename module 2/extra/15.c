//Write a C program that takes a string from the user and counts the number of vowels and consonants in the string.
//? Challenge: Extend the program to also count digits and special characters.
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); 

    while (str[i] != '\0') {
        char ch = str[i];


        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }

        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        else if (ch >= '0' && ch <= '9') {
            digits++;
        }

        else if (ch != ' ') {
            specialChars++;
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialChars);

    return 0;
}

