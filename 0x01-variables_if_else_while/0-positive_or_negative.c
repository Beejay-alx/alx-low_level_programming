#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() -RAND_MAX / 2;
    /**
    * if: the if statement is usd to analyze the function
    *
    * printf: the printf is use to print out the output to  the stdo
    *
    */
    if (n > 0)
    {
	printf ("%d is positive\n", n); 
    }
    else if (n == 0)
    {
	printf("% is zero\n", n);
    }
    else
    {
	printf("% is negative", n);
    }
    return (0);
}
	
