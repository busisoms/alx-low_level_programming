#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: contexts to be appended
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		a = write(fd, text_content, strlen(text_content));
		if (a == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);

	return (1);
}

