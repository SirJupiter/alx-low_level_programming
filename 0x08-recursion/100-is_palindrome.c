#include "main.h"

/**
 * _check_palindrome - checks palindrome
 * @len: length of string
 * @str: pointer to string
 *
 * Return: 0 if a palindrome
*/
int _check_palindrome(int len, char *str)
{
	int end = len - 1;

	if (*str != str[end])
		return (0);
	if (*str >= str[end])
		return (1);
	return (_check_palindrome(len - 1, str + 1));
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

	while (*s != '\0')
	{
		length++;
		s++;
	}

	if (length <= 1)
		return (1);

	return (_check_palindrome(length, s));
}
