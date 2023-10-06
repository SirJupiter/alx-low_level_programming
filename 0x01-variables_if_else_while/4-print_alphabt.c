#include <stdio.h>

/**
 * main - This is the main function for program entry
 *
 * Return: 0 on successful execution of code
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
