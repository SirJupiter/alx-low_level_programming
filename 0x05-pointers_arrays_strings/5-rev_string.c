#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j, temp, end;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	end = length - 1;
	for (j = 0; j < end; j++)
	{
		temp = s[j];
		s[j] = s[end];
		s[end] = temp;
		end--;
	}
}


