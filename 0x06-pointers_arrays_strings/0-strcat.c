#include "main.h"

/**
 * _strcat - this function concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int length = 0;

	while (dest[length] != '\0')
		length++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
