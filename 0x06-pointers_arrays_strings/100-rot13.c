#include "main.h"
#include <stdbool.h>
/**
 * rot13 - function that encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: encoded string
*/
char *rot13(char *str)
{
	int i;
	bool term1, term2, term3, term4;

	for (i = 0; str[i] != '\0'; i++)
	{
		term1 = str[i] >= 'a' && str[i] <= 'm';
		term2 = str[i] >= 'A' && str[i] <= 'M';
		term3 = str[i] >= 'n' && str[i] <= 'z';
		term4 = str[i] >= 'N' && str[i] <= 'Z';

		if (term1 || term2)
			str[i] += 13;
		else if (term3 || term4)
			str[i] -= 13;
	}
	return (str);
}
