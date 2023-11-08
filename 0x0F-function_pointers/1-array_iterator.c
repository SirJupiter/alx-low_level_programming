#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function
 * @array: pointer to array passed
 * @size: size of array
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
