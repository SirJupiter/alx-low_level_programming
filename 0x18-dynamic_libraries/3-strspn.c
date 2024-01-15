#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: string
 * @accept: another string
 *
 * Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				num++;
		}
	}
	return (num);
}
