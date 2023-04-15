#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - copies files
 * @argc: arg cout
 * @argv: arg values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int fd1, fd2, temp1, temp2; /* file descriptors */
	ssize_t count; /* readcheck */
	char *buffer[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	fd1 = open(argv[1], O_RDONLY);
	do {
		count = read(fd1, buffer, 1024);
		if (count == -1)
{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	return (98);
}
		temp2 = write(fd2, buffer, count);
		if (temp2 == -1)
{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	return (99);
}

	} while (count != 0);
	temp1 = close(fd1);
	if (temp1 == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd 1\n");
		return (100);
	}
	temp2 = close(fd2);
	if (temp2 == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd 2\n");
		return (100);
	}
	return (0);
}
