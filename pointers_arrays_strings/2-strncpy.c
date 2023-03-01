#include <stdio.h>
#include "main.h"
/**
 * *_strncopy - copies string to n
 * @dest: destination
 * @src: source
 * @n: limit of concatenation for src
 * Return: product
 */
char *_strncopy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
