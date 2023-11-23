#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: int
*/
int get_endianness(void)
{
	int d = 1;
	char *k = (char *) &d;

	if (*k)
		return (1);
	else
		return (0);
}
