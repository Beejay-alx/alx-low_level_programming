#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copy a fixed-size string
 * @n: integers to indicate amount of string
 * @src: copy the source
 * @dest: copy destination
 *
 * Return: the value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\n')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\n';
		a++;
	}
	return (dest);
}
