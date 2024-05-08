#include "search_algos.h"

/**
 * interpolation_search - function searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: numbr of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * otherwise -1 if value is not present in array or if array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (high < size && low < high)
	{
		pos = low + (
			((double)(high - low) / (array[high] - array[low])) * (value - array[low])
			);

		if (array[pos] > array[size - 1])
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		else
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
