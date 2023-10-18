#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer to be printed
*/
void print_number(int n)
{
	int nn;

	nn = n;
	if (nn < 0)
	{
		_putchar('-');
		nn = -n;
	}

	if (nn / 10 != 0)
		print_number(nn / 10);

	_putchar((nn % 10) + '0');
}
