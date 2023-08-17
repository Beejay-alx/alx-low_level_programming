#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all the arguement
 * @n: constant int to the arguements
 *
 * Return: the sum of all the arguements
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, total = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(ap, int);
	}
	va_end(ap);
	return (total);
}
