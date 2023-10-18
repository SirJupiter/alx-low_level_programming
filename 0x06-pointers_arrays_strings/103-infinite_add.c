#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for storing result
 * @size_r: size of buffer
 *
 * Return: addition of numbers
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0, digits = 0;
	int var1 = 0, var2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			var1 = 0;
		else
			var1 = *(n1 + i) - '0';
		if (j < 0)
			var2 = 0;
		else
			var2 = *(n2 + j) - '0';
		temp = var1 + var2 + carry;
		if (temp >= 10)
			carry = 1;
		else
			carry = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
