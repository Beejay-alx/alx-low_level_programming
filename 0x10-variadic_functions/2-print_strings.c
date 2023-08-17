#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings follwed by a newline
 * @seperator: pointer to the string to be printed between the strings
 * @n: number of the strings passed to the function
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != n - 1 && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	va_end(ap);
	printf("\n");
}
