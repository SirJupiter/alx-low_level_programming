#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
*/
char *leet(char *str)
{
	int i;
	char leet_dict[256];

	for (i = 0; i < 256; i++)
		leet_dict[i] = i;

	leet_dict['a'] = '4';
	leet_dict['A'] = '4';
	leet_dict['e'] = '3';
	leet_dict['E'] = '3';
	leet_dict['o'] = '0';
	leet_dict['O'] = '0';
	leet_dict['t'] = '7';
	leet_dict['T'] = '7';
	leet_dict['l'] = '1';
	leet_dict['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
		str[i] = leet_dict[(unsigned char) str[i]];

	return (str);
}
