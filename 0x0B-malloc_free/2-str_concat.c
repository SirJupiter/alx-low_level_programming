#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new memory containing both strings
*/
char *str_concat(char *s1, char *s2)
{
	int i, length1, length2;
	int j = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	else if (s1 == NULL && s2 == NULL)
		return (NULL);
	length1 = strlen(s1);
	length2 = strlen(s2);
	new_str = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		new_str[i] = s1[i];
	for (; i < (length1 + length2); i++)
	{
		new_str[i] = s2[j];
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
