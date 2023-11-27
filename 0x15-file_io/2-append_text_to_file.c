#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: text to be appended to file
 *
 * Return: 1 on success; -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, length = 0;
	ssize_t write_text;

	if (filename == NULL)
		return (-1);

	while (text_content[length])
		length++;

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	while (text_content[length])
		length++;

	if (text_content != NULL)
		write_text = write(file_desc, text_content, length);

	if (write_text > -1)
		return (1);
	else
		return (-1);

	close(file_desc);
}
