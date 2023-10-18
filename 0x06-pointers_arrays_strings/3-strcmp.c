#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are the samw
 * returns +ve if first string > second string
 * returns -ve if first string < second string
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && (s1[i] == s2[i]); i++)
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
