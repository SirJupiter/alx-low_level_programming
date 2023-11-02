#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multiply - multiplies two arguments from  main's argv
 * @num1: first argument number
 * @num2: second argument number
 *
 * Return: 0
*/
int multiply(char *num1, char *num2)
{
	int i, j, len1, len2, digit1, digit2;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);

	if (len1 == 0 || len2 == 0)
	{
		printf("Error\n");
		return (98);
	}

	result = (int *)calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			result[i + j + 1] += digit1 * digit2;
		}
	}

	for (i = len1 + len2 - 1; i > 0; i--)
	{
		result[i - 1] += result[i] / 10;
		result[i] %= 10;
	}

	i = (result[0] == 0) ? 1 : 0;
	while (i < len1 + len2)
	{
		printf("%d", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: multiply function
*/
int main(int argc, char *argv[])
{
	char *num1, *num2;
	unsigned int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; i < strlen(num1); i++)
	{
		if (num1[i] < '0' || num1[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; i < strlen(num2); i++)
	{
		if (num2[i] < '0' || num2[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	return (multiply(num1, num2));
}
