#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int cents, ncoin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] < 0)
		printf("0\n");
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoin += 1;
	}
	printf("%d\n", ncoin);
	return (0);
}
