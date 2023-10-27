#include "main.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer converted
 * returns 0 if string contains no numbers
*/
int _atoi(char *s)
{
	int i, b, n, length, k, num;

	i = 0;
	b = 0;
	n = 0;
	length = 0;
	k = 0;
	num = 0;

	while (s[length] != '\0')
		length++;
	while (i < length && k == 0)
	{
		if (s[i] == '-')
			++b;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (b % 2)
				num = -num;
			n = n * 10 + num;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}
	if (k == 0)
		return (0);
	return (n);
}
