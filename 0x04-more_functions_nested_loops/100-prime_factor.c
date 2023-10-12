#include <stdio.h>

/**
 * main - Program to print prime factors
 *
 *  Return: 0 on success of execution
 */
int main(void)
{
	long int i, p_num, div, largest;
	long int num = 612852475143;

	p_num = num;
	for (i = 2; i < p_num; i++)
	{
		if (p_num % i == 0)
		{
			div = p_num / i;
			p_num = div;
			largest = i;
			i = 2;
		}
	}
	printf("%ld\n", largest);
	return (0);
}

