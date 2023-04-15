#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content of file
 * Return: Always 1 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */

	if (!filename)
		return (-1);
	/* 600 is permissions. 0 before is something else i forget */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	return (1);
}
