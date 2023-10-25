#include "main.h"

/**
 * _helper_sqrt - helper function
 * @num: number to be checked
 * @guess: guess
 *
 * Return: guess
*/
int _helper_sqrt(int num, int guess)
{
	if (guess * guess == num)
		return (guess);
	else if (guess * guess > num)
		return (-1);
	return (_helper_sqrt(num, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: number whose square root should be returned
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_helper_sqrt(n, 1));
}
