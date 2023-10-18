#include "main.h"

/**
 * string_toupper - function changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: uppercase letters
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
