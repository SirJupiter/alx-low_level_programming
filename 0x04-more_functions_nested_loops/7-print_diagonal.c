#include "main.h"

/**
 * print_diagonal - function draws a diagonal line on terminal
 * @n: number of times line will be drawn
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

