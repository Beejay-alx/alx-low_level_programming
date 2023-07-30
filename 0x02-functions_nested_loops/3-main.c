#include "main.h"
/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int c;

	c = _islower('H');
	_putchar(c + '0');
	c = _islower('0');
	_putchar(c + '0');
	c = _islower(108);
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}
