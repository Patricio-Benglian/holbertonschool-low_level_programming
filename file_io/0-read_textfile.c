#include "main.h"
/**
 * read_textfile - reads text file and prints to stdout
 * @filename: name of file to read
 * @letters: amount of letters it could read and print
 * Return: Actual amount read and printed or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	char *buffer;
	size_t count;

	buffer = malloc(letters); /* allocate space for each letter */
	/* if filename is empty */
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	count = read(fd, buffer, letters);
	write(1, buffer, count);
	close(fd);

	/* return amount read and printed */
	return (count);
}
