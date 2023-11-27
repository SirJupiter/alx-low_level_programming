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
	int file_desc;
	ssize_t write_text;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		if ((open(filename, O_CREAT | O_EXCL)) == -1)
		{
			file_desc = open(filename, O_TRUNC);
		}
		else
		{
			file_desc = open(filename, O_CREAT | O_RDWR, 0600);
		}
	}
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_text = write(file_desc, text_content, strlen(text_content));
		if (write_text == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
