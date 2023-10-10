#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 * @k: digit to be checked
 *
 * Return: n which is the last digit
 */
int print_last_digit(int k)
{
	int n;
	int num;

	if (k < 0)
		num = -k;
	else
		num = k;
	n = num % 10;
	if (n < 0)
		n = -n;
	_putchar('0' + n);
	return (n);
}
