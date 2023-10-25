#include "main.h"

/**
 * _check_palindrome - checks palindrome
 * @end: length of string - 1
 * @start: start of string
 * @str: pointer to string
 *
 * Return: 0 if a palindrome
*/
int _check_palindrome(int end, int start, char *str)
{
	if (start >= end)
		return (1);
	if (str[start] != str[end])
		return (0);
	return (_check_palindrome(end - 1, start + 1, str));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if string is a palindrome
 * returns 0 otherwise
*/
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	if (length <= 1)
		return (1);

	return (_check_palindrome(length - 1, 0, s));
}
