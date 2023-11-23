#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit
 * @index: index
 *
 * Return: value of the bit at the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (n == 0)
		return (-1);

	if (index >= sizeof(n) * 8)
		return (-1);

	if (n && index == 0)
	{
		value = n & 1;
		return (value);
	}

	value = (n >> index) & 1;

	return (value);
}
