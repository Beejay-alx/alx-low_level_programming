#include "main.h"
/**
 * _islower - this is use to check if the case of the letter is lower case
 *
 * Description:
 *	it checks if the character provided is lower case, if it is a
 *	lowercase it prints 1 else print 0
 * @c: the charcter to check
 *
 * Return: 1 if c is lowercase, 0 if else
 *
 */
int _islower(int c)
{
	/* if : the if statement is used to execute the the condition */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
