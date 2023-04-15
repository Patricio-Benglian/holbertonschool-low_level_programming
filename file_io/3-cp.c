#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _cp - copies files
 * @file_from: source file
 * @file_to: destination file
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int fd1, fd2; /* file descriptors */
	ssize_t count; /* readcheck */
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	do
	{
		count = read(fd1, buffer, 1024);
		write(fd2, buffer, count);
	} while (count != 0);
	close(fd1);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd 1\n");
		return (100);
	}
	close(fd2);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd 2\n");
		return (100);
	}
	return (0);
}
