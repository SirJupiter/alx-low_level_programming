#include <stdio.h>

/**
 * main - This is the main function for entry
 *
 * Return: 0 on successful execution of code
 */
int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
