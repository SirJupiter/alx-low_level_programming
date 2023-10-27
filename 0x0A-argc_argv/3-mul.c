#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
