#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_space - checks for space
 * @c: character to be checked
 *
 * Return: int
*/
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - function counts words
 * @str: string to be counted
 *
 * Return: number of counts
*/
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
				in_word = 0;
		} else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - function splits a string into words
 * @str: string to be split
 *
 * Return: array of strings
*/
char **strtow(char *str)
{
	int i, j, k, len = 0, words;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	arr = (char **)malloc((words + 1) * sizeof(char *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (is_space(*str))
			str++;
		len = 0;
		while (str[len] && !is_space(str[len]))
			len++;
		arr[i] = (char *)malloc((len + 1) * sizeof(char));

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			arr[i][k] = *str++;
		arr[i][k] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
