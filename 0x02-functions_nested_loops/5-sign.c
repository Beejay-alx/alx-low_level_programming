#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a given number
 * @n: value to be check
 *
 * Return: 1 if > 0, 0 if == 0 else -1
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
