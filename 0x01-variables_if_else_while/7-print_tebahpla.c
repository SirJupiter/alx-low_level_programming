#include <stdio.h>

/**
 * main - This is the main function for entry
 *
 * Return: 0 on successful execution of code
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
