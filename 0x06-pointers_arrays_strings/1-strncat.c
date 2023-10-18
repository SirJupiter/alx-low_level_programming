#include "main.h"

/**
 * _strncat - function concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;

	if (j < n)
	{
		for (k = 0; src[k] != '\0'; k++)
		{
			dest[i] = src[k];
			i++;
		}
		dest[i] = '\0';
	} else
	{
		for (k = 0; k <= n; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}

	return (dest);
}
