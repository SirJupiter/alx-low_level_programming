#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to newly allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *loc;
	unsigned int i, j, length = 0;

	if (s1 == NULL)
		s1 = '\0';
	else if (s2 == NULL)
		s2 = '\0';
	else if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[length] != '\0')
		length++;
	

	loc = malloc((length + n + 1) * sizeof(char));
	if (loc == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		loc[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		loc[i] = s2[j];
		i++;
	}
	loc[i] = '\0';
	return (loc);
}
