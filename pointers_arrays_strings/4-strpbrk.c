#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: prefix characters
 * Return: number of bytes matching prefix
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0, n = 0; *accept;)
	{
		if (accept[n] == s[i])
		{
			return (s + i - 1);
		}
		else if (accept[n + 1] == '\0')
		{
			return (s + i + 1);
		}
		else
		{
			n++;
			i++;
		}
	}
	return (s + i - 1);
}
