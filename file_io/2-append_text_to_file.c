#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: content of text
 * Return: Always 1 (Success) -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));
	return (1);
}
