#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the value of two integers
 * @a: first values to be swap
 * @b: second values to be swap
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
