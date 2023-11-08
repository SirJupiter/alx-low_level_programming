#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function searches for an integer
 * @array: array in which integer should be searched
 * @size: size of array involved
 * @cmp: pointer to function that does the search
 *
 * Return: integer being searched for
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, number;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		number = cmp(array[i]);
		if (number != 0)
			return (i);
	}
	return (-1);
}
