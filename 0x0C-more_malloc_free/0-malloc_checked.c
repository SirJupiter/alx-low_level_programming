#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 * @b: number of bytes to allocate for
 *
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *loc;

	loc = malloc(b);
	if (loc == NULL)
		exit(98);
	else
		return (loc);
}
