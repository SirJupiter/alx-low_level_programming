#include "main.h"
#include <stddef.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string to be checked
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
