#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 0 on successful execution of code
 */
int main(void)
{
	int i;
	long long int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	printf("%lld, %lld", fib[0], fib[1]);
	for (i = 2; i < 48; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(", %lld", fib[i]);
	}
	return (0);
}
