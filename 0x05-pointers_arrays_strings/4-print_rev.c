#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j;
	int length = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
