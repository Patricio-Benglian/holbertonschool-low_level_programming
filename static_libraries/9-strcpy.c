#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - copies string pointed to by src
 * @dest: recieved output of src
 * @src: source of the copied string
 * Return: returns Dest
 */
char *_strcpy(char *dest, char *src)
{
	char *point = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (point);
}
