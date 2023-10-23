#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: character
 * return NULL if character is not found
*/
char *_strchr(char *s, char c)
{
	int length = 0;

	while (s[length] != '\0')
	{
		s++;
		length++;
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
