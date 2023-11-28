#include "main.h"

/**
 * print_error - print an error message to stderr and exit with a code
 * @code: exit code to be used when exiting
 * @message: error message to be printed
 * @file_name: name of the file with the error
 *
 */

void print_error(int code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
	exit(code);
}


/**
 * main - copies the content of a file to another file
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, or exit codes (97, 98, 99, 100) on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to file", argv[2]);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to file", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file", argv[1]);
	}
	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd", argv[1]);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd", argv[2]);
	return (0);
}
