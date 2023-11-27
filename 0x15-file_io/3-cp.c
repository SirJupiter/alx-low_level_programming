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
	int file_from, file_to;
	int read_text, write_text;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}

	while ((read_text = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		write_text = write(file_to, buffer, read_text);
		if (write_text == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (read_text == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
