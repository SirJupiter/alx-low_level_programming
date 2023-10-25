#include "main.h"

/**
 * _check_prime - reduces n by 1 and checks as a divisor of n
 * @n: number to be checked
 * @divisor: number to be used to divide n
 *
 * Return: 1 on success
 * returns 0 otherwise
*/
int _check_prime(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (_check_prime(n, divisor - 1));
}

/**
 * is_prime_number - returns 1 if input is prime number
 * @n: number to be checked
 *
 * Return: 1 on success
 * returns 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (_check_prime(n, n - 1));
}
