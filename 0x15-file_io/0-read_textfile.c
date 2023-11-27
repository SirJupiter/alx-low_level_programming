#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIZ standard output
 * @filename: pointer to the filename
 * @letters: number of letters it should print
 *
 * Return: number of letters written_text
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *the_file;
	ssize_t written_text = 0, i = 0;
	char chr;

	if (!filename || letters < 1)
	{
		return (0);
	}

	the_file = fopen(filename, "r");

	if (!the_file)
		return (0);

	while ((chr = fgetc(the_file)) != EOF)
	{
		if (written_text < (ssize_t)letters)
		{
			i = write(STDOUT_FILENO, &chr, 1);
			if (i == -1)
				return (0);
			written_text += i;
		}
	}

	fclose(the_file);
	return (written_text);
}
