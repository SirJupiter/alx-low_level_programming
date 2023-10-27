#include "main.h"
#include <stdio.h>

/**
 * main - program prints all arguments it receives
 * @argc: number of arguments passed
 * @argv: the arguments
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
