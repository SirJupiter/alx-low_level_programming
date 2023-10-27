#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program adds positive numbers
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
		printf("0\n");
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}
