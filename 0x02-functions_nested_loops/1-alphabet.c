#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description:
 *	This function uses _putchar to print of the letter of the alphabet from
 *	'a' to 'z', followed by a newline character.
 *
 * Return: ruturns the value of the program
 *
 */
void print_alphabet(void)
{
	/**
	 * char: use to declare the variable a
	 *
	 * while: use to loop the program in it
	 *
	 * _putchar use to print a single char to the stdie
	 *
	 */
	char a = 'a';

	while (a <= 'z')
	{
		_putchar (a);
		a++;
	}
	_putchar('\n');
}
