#include "main.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer converted
 * returns 0 if string contains no numbers
*/
int _atoi(char *s)
{
	int i;
	int sign = 1;
	int result = 0;
	int count = 0;
	int relevant = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-')
				sign = -1;
			result = (result * 10) + (s[i] - '0');
			count++;
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				relevant++;
			else
				break;
		}
	}
	if (count > 0)
		return (sign * result);
	else
		return (0);
}
