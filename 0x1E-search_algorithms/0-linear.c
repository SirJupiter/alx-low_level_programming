#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for (int)
 *
 * Return: -1 if value is not present in array or if array is NULL
 * else return first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !size)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
