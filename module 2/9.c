 //Write a C program to demonstrate pointer usage. Use a pointer to modify the
//value of a variable and print the result.
#include <stdio.h>

int main() {
    int num = 5;        
    int *ptr;        

    ptr = &num;         

    printf("Before modification, value of num: %d\n", num);
    
    *ptr = 10;          

    printf("After modification using pointer, value of num: %d\n", num);
    
    return 0;
}

