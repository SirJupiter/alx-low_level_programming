#include "main.h"

/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: another string
 *
 * Return: return byte that matches one of the bytes in accept
 * return NULL if no byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
