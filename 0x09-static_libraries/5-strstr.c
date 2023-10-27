#include "main.h"

/**
 * _strstr - function locates a substring
 * @haystack: the all-encompassing string
 * @needle: string to be found in the haystack
 *
 * Return: pointer to beginning of located substring
*/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
