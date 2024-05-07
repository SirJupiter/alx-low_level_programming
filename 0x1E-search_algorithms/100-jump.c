#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * else return -1 if value is not present in array or if array is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, last, first = 0;

	if (!array || !size)
		return (-1);

	jump = round(sqrt(size));
	last = first + jump;

	while (array[last] < value && last < size)
	{
		printf("value checked array[%d] = [%d]\n", (int)first, array[first]);
		/*printf("value checked array[%d] = [%d]\n", (int)last, array[last]);*/

		first = last;
		last = last + jump;
	}

	printf("value checked array[%d] = [%d]\n", (int)first, array[first]);
	printf("Value found between indexes [%d] and [%d]\n",
	(int)first, (int)last);

	for (i = first; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
