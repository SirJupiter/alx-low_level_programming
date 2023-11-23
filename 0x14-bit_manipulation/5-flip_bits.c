#include "main.h"

/**
 * flip_bits - returns the number of bits one would
 * need to flip to get from one number to another
 * @n: bit
 * @m: result of flipping
 *
 * Return: number of bits to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int _bit;

	if (n == m)
		return (0);

	_bit = n ^ m;

	while (_bit)
	{
		count += _bit & 1;
		_bit >>= 1;
	}

	return (count);
}
