#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: from this figure included
 * @max: to this figure included
 *
 * Return: array of integers
*/
int *array_range(int min, int max)
{
	int i, length = 0;
	int *loc;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		length++;
	loc = malloc(length * sizeof(int));
	if (loc == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		loc[i] = min + i;
	return (loc);
}
