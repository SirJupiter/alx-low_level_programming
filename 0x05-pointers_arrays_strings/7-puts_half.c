#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
*/
void puts_half(char *str)
{
	int i, j, n, length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	n = (length - 1) / 2;
	for (j = n + 1; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
