#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: null terminated string to add at the end of the file
 * @filename: name of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (size = 0; text_content[size] != '\0'; size++)
			;
		write(fd, text_content, size);
	}

	close(fd);
	return (1);
}
