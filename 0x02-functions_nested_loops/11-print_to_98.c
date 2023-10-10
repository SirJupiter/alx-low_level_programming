#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start printing from
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (i <= 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			i++;
		}
	}
	else if (i >= 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			i--;
		}
	}
	printf("\n");
}
