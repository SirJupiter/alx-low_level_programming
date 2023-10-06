#include <stdio.h>

/**
 * main - This is the main function for entry
 *
 * Return: 0 on successful execution of code
 */
int main(void)
{
	int c, d;

	for (c = 48; c <= 56; c++)
	{
		for (d = 49; d <= 57; d++)
		{
			if (d > c)
			{
				putchar(c);
				putchar(d);
				if (c != 56 || d != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
