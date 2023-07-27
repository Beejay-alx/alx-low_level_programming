#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - copy string from one pointer to another &&
 *		overwrite the terminating null byte (\0)
 * @scr: source to copy from
 * @dest: copy destination
 *
 * Return: always 0
 */
char *_strcat(char *dest, char *scr)
{
	char *prt = dest;

	while (*dest)
	{
		dest++;
	}
	while (*scr)
	{
		*dest++ = *scr++;
	}
	*dest = '\0';
	return (prt);
}
