#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer to be printed
*/
void print_number(int n)
{
	if (n < 0)
		_putchar('-');

	if (n >= 0 && n < 10)
		_putchar(n + '0');

	if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		if (n > 100)
			_putchar(((n / 10) % 10) + '0');
	}
}
