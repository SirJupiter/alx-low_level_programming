#include "main.h"
#include <stdlib.h>

/**
 * main - program copies the content of a file to another file
 * @ac: number of arguments
 * @av: array of pointers to arguments
 *
 * Return: 0 on success
*/
int main(int ac, char **av)
{
	int file_a, file_b;
	int read_text, write_text;
	char *buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_b = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	file_a = open(av[1], O_RDONLY);
	if (file_a == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (file_b == -1)
	{
		dprintf(2, "Error: Can't write to %s", av[2]);
		exit(99);
	}

	read_text = read(file_a, buffer, sizeof(buffer));
	if (read_text == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	write_text = write(file_b, buffer, read_text);
	if (write_text == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (close(file_a))
	{
		dprintf(2, "Error: Can't close fd %d\n", file_a);
		exit(100);
	}
	if (close(file_b) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_b);
		exit(100);
	}

	return (0);
}
