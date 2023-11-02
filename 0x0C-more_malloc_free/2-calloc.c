#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *loc;

	if (nmemb != 0 && ((nmemb * size) / nmemb) != size)
		return (NULL);

	loc = malloc(nmemb * size);
	if (loc == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)loc + i) = 0;
	return (loc);
}
