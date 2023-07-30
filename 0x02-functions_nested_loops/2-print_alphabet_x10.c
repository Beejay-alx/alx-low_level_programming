#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - the function prints alphabet in lowercases 10 times
*
* Desciption:
*	it prints each letter of the alphabet in lowercase followed by
*	a newline using _putchar
*
*/
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
