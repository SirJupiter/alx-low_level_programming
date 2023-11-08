#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of itself
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int bytes, ind;
	int (*address)(int, char**) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (ind = 0; ind < bytes; ind++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (ind == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
