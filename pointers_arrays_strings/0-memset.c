#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: byte to fill with
 * @n: the amount of bytes to fill
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}
