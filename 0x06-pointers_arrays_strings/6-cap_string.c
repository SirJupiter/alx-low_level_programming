#include "main.h"

/**
 * cap_string - function capitalizes all words of a string
 * @str: string to be worked on
 *
 * Return: str
*/
char *cap_string(char *str)
{
	int i;
	int s;

	char separator[] = ",;.!?\"(){} \t\n";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (s = 0; separator[s] != '\0'; s++)
		{
			if (str[i] == separator[s])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[(i + 1)] - 32;
				}
			}
		}
	}
	return (str);
}
