#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @g: integer to be computed
 *
 * Return: -g if integer is less than zero
 * returns g otherwise
 */
int _abs(int g)
{
	if (g < 0)
		return (-g);
	else
		return (g);
}
