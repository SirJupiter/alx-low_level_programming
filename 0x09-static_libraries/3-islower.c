#include "main.h"

/**
 * _islower - function checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 if arguments is lowercase
 * returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
