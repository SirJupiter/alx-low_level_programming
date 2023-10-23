#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array
*/
void print_chessboard(char (*a)[8])
{
	int i, j, c, d;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			c = a[i][j] >= 'a' && a[i][j] <= 'z';
			d = a[i][j] >= 'A' && a[i][j] <= 'Z';
			if (c || d)
				_putchar(a[i][j]);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
