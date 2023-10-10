#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int p, q, r;

	for (p = 0; p <= 9; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			r = p * q;
			if (q == 0)
			{
				_putchar(r + '0');
			} else if (r <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			} else if (r > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			}
		}
		_putchar('\n');
	}
}
