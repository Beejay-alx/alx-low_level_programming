#include <stdio.h>
/**
 * main - prints all arguement it receives
 * @argc: number of command line arguements
 * @argv: array that contains the program command line arguementss
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
