#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: bit
 * @index: index, starting from 0
 *
 * Return: 1 if successful, -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
