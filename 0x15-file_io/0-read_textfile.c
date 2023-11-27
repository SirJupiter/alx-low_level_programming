#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIZ standard output
 * @filename: pointer to the filename
 * @letters: number of letters it should print
 *
 * Return: number of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t read_text, written_text;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_desc = open("filename", O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}

	read_text = read(file_desc, buffer, letters);
	if (read_text == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	written_text = write(STDOUT_FILENO, buffer, read_text);

	if (written_text == -1 || read_text != written_text)
	{
		close(file_desc);
		return (0);
	}


	free(buffer);
	close(file_desc);

	return (written_text);
}
