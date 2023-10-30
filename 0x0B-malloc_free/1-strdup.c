#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space
 * @str: string to be copied
 *
 * Return: pointer to allocated memory
*/
char *_strdup(char *str)
{
	int i, length = 0;
	char *another_str;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	another_str = (char *)malloc((length + 1) * sizeof(char));
	if (another_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		another_str[i] = str[i];
	return (another_str);
}
