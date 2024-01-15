#include "main.h"

/**
 * _strcpy - function copies a string
 * @dest: pointer to a buffer
 * @src: pointer to string
 *
 * Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;
	int length = 0;

	for (i = 0; src[i] != '\0'; i++)
		length++;
	for (j = 0; src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
