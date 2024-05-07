#include "search_algos.h"

/**
 * binary_search - function searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointr to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL
 * otherwise return the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, low = 0;
	size_t high = size -  1;

	if (!array || !size)
		return (-1);

	/* Set initial values */


	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		mid = low + ((high - low) / 2);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
