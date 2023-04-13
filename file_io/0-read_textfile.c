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
	/* file desc gets return value of open (-1 on fail) */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	/* read returns amount it could read without fail + adds read to buf */
	count = read(fd, buffer, letters);
	/* output as standardoutput ? */
	write(STDOUT_FILENO, buffer, count);
	close(fd);
	free (buffer);

	/* return amount read and printed */
	return (count);
}
