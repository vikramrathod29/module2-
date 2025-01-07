//write a program to take a number from thr user and check whether it is prime or not

#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num % 2==0)
    {
    	printf("the number is prime");
	}
	else
	{
		printf("the number is not prime");
	}
	return 0;
	}

    
                

