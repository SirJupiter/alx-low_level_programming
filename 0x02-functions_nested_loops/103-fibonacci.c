#include <stdio.h>

/**
 * main - prints each term in sequence starting with 1 and 2
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	long int l_term, n_term, sum;
	long int fibo[2];

	fibo[0] = 1;
	fibo[1] = 2;
	sum = fibo[1];
	l_term = fibo[1];
	while (l_term <= 4000000)
	{
		n_term = fibo[0] + fibo[1];
		l_term = n_term;
		fibo[0] = fibo[1];
		fibo[1] = n_term;
		if (n_term % 2 == 0)
			sum = sum + n_term;
	}
	printf("%ld\n", sum);
	return (0);
}
