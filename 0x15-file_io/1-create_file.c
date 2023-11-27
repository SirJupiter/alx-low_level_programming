#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be put in file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_desc, length = 0;
	ssize_t write_text;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		write_text = write(file_desc, text_content, length);

		if (write_text == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
