#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *loc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	loc = malloc(nmemb * size);
	if (loc == NULL)
		return (NULL);
	memset(loc, 0, nmemb + size);
	return (loc);
}
