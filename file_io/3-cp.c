#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

void error_exit(char *message, char *filename, int fd);

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rlen, wlen, close_from, close_to;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (EXIT_FAILURE);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", argv[1], -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit("Error: Can't write to file", argv[2], fd_from);

	do {
		rlen = read(fd_from, buffer, BUFFER_SIZE);
		if (rlen == -1)
			error_exit("Error: Can't read from file", argv[1], fd_from);

		wlen = write(fd_to, buffer, rlen);
		if (wlen == -1 || wlen != rlen)
			error_exit("Error: Can't write to file", argv[2], fd_from);
	} while (rlen == BUFFER_SIZE);

	close_from = close(fd_from);
	if (close_from == -1)
		error_exit("Error: Can't close fd", argv[1], fd_from);

	close_to = close(fd_to);
	if (close_to == -1)
		error_exit("Error: Can't close fd", argv[2], fd_from);

	return (EXIT_SUCCESS);
}

/**
 * error_exit - prints an error message and exits with a specific code
 * @message: the error message
 * @filename: the name of the file
 * @fd: the file descriptor
 */
void error_exit(char *message, char *filename, int fd)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	if (fd != -1)
		close(fd);
	exit(EXIT_FAILURE);
}
