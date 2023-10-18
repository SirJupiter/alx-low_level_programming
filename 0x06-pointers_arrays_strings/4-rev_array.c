#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integetd
 * @a: array to be reversed
 * @n: number of elements in array
*/
void reverse_array(int *a, int n)
{
	int i, temp;
	int end = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		end--;
	}
}
