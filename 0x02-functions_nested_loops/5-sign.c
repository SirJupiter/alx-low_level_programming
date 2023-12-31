#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: the number to be printed
 *
 * Return: 1 on success
 * returns 0 if number is 0
 * returns 1- if number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
