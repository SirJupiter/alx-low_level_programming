#include "main.h"

/**
 * jack_bauer - prints evry minute of the day
 */
void jack_bauer(void)
{
	int p, q, r, s;

	for (p = 0; p <= 2; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			if (p == 2 && q > 3)
				continue;
			for (r = 0; r <= 5; r++)
			{
				for (s = 0; s <= 9; s++)
				{
					_putchar('0' + p);
					_putchar('0' + q);
					_putchar(':');
					_putchar('0' + r);
					_putchar('0' + s);
					_putchar('\n');
				}
			}
		}

	}
}
