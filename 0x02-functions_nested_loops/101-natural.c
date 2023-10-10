#include <stdio.h>

/**
 * main - This is the main function for entry
 *
 * Return: 0 on success of execution
 */
int main(void)
{
	int i;
	int n = 0;


	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (0);
}
