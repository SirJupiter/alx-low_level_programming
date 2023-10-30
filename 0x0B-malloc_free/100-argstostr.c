#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments in program
 * @ac: count
 * @av: list of arguments
 *
 * Return: new array
*/
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, len = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	new_str = malloc((length + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[len] = av[i][j];
			len++;
		}
		new_str[len] = '\n';
		len++;
	}
	new_str[len] = '\0';
	return (new_str);
}
