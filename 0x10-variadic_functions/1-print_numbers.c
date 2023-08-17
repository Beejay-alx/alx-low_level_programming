#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a newline
 * @seperator: a pointer to the string to be printed between numbers
 * @n: integers passed to the function
 *
 * Return: the value of the numbers
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	va_end(ap);
	printf("\n");
}
