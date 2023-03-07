#include <stdio.h>
#include "main.h"
/**
 * *_strncat - concatenates two strings up to n from src
 * @dest: destination
 * @src: source
 * @n: limit of concatenation for src
 * Return: product
 */
char *_strncat(char *dest, char *src, int n)
{
	int incdest, incsrc, i = 0;

	for (incdest = 0; dest[incdest] != '\0';)
	{
		incdest++;
	}
	for (incsrc = 0; src[incsrc] != '\0' && i < n; incsrc++, incdest++, i++)
	{
		dest[incdest] = src[incsrc];
	}
	dest[incdest] = '\0';
	return (dest);
}
