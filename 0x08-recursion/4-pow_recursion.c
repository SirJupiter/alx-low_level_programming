#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: number to be raised
 * @y: power to which x should be raised
 *
 * Return: value of x raised
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
