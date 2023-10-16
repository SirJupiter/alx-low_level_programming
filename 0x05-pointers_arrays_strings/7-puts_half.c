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
	if (length % 2 != 0)
		n = (length - 1) / 2;
	else
		n = length / 2;
	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
