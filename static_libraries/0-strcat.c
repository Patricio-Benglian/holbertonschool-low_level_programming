#include <stdio.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: product
 */
char *_strcat(char *dest, char *src)
{
	int incdest, incsrc;

	for (incdest = 0; dest[incdest] != '\0';)
	{
		incdest++;
	}
	for (incsrc = 0; src[incsrc] != '\0'; incsrc++, incdest++)
	{
		dest[incdest] = src[incsrc];
	}
	dest[incdest] = '\0';
	return (dest);
}
