#include <stdio.h>

/**
 * main - prints some fibonacci sequence <3
 *
 * Return: 0 on successful execution of code
 */
int main(void)
{
	unsigned long int k;
	unsigned long int first = 1;
	unsigned long int last = 2;
	unsigned long int m = 1000000000;
	unsigned long int first1;
	unsigned long int first2;
	unsigned long int last1;
	unsigned long int last2;

	printf("%lu", first);
	for (k = 1; k < 91; k++)
	{
		printf(", %lu", last);
		last = last + first;
		first = last - first;
	}
	first1 = first / m;
	first2 = first % m;
	last1 = last / m;
	last2 = last % m;
	for (k = 92; k < 99; k++)
	{
		printf(", %lu", last1 + (last2 / m));
		printf("%lu", last2 % m);
		last1 = last1 + first1;
		first1 = last1 - first1;
		last2 = last2 + first2;
		first2 = last2 - first2;
	}
	printf("\n");
	return (0);
}
