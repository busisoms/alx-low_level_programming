#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file path
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r, total_read = 0;
	ssize_t written;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	while (letters > 0 && (r = read(fd, buffer, letters)) > 0)
	{
		written = write(STDOUT_FILENO, buffer, r);
		if (written != r)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		total_read += r;
		letters -= r;
	}

	free(buffer);
	close(fd);
	return (total_read);
}
