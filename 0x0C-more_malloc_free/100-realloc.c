#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: bytes size allocated for ptr
 * @new_size: bytes size of new memory block
 *
 * Return: ptr or ptr2
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *ptr2;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		*((char *)ptr2 + i) = *((char *)ptr + i);
	free(ptr);
	return (ptr2);
}
