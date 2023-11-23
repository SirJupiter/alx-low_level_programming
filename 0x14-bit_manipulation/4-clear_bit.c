#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to bit
 * @index: index of the bit to be set
 *
 * Return: 1 if successful; -1 if error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n |= 0;

	mask = ~(1UL << index);

	*n &= mask;

	return (1);
}
