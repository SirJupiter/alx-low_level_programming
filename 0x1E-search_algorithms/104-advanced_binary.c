#include "search_algos.h"

/**
 * binary_recursive - searches recursively for a value in
 * a sorted array of integers using binary search
 * @array: pointer to the first element of the subarray to search
 * @low: starting index of the subarray to search
 * @high: ending index of the subarray to search
 * @value: the value to search for
 *
 * Return: the index where the value is located
 * otherwise -1 if the value is not present
*/
int binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (high < low)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = low + ((high - low) / 2);
	if (array[i] == value && (i == low || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (binary_recursive(array, low, i, value));

	return (binary_recursive(array, i + 1, high, value));
}

/**
 * advanced_binary - function that searches for a value
 * in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 * otherwise -1 if value is not present in array or if array is NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
