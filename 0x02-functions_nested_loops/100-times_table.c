#include "main.h"

/**
 * print_times_table - function prints the n times table
 * @n: number table
 */
void print_times_table(int n)
{
	int f, g, h;

	if (n >= 0 && n <= 15)
	{
		for (f = 0; f <= n; f++)
		{
			for (g = 0; g <= n; g++)
			{
				h = f * g;
				if (g == 0)
				{
					_putchar(h + '0');
				} else if (g != 0 && h < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(h + '0');
				} else if (h > 9 && h < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((h / 10) + '0');
					_putchar((h % 10) + '0');
				} else if (h > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((h / 100) + '0');
					_putchar(((h / 10) % 10) + '0');
					_putchar((h % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
