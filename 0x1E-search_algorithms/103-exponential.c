#include "search_algos.h"

/**
 * exponential_search - function that searches for a value
 * in a sorted array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * otherwise -1 if value is not present in array or if array is NULL
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid, exponent = 0;

	if (!array || !size)
		return (-1);

	if (array[exponent] == value)
		return (exponent);

	exponent = 1;

	while (exponent < size && array[exponent] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)exponent, array[exponent]);

		if (array[exponent] == value)
			return (exponent);

		exponent *= 2;
	}

	low = exponent / 2;
	high = exponent;
	if (exponent >= size)
		high = size - 1;

	printf("Value found between indexes [%d] and [%d]\n", (int)low, (int)high);

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
